/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   images.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:47:27 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:47:27 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

void	load_textures(t_cub *game)
{
	game->north = init_textures(game->data->no);
	game->south = init_textures(game->data->so);
	game->west = init_textures(game->data->we);
	game->east = init_textures(game->data->ea);
}

mlx_texture_t	*init_textures(char *path)
{
	mlx_texture_t	*images;

	images = mlx_load_png(path);
	if (!images)
		handle_error("Error: mlx_load_png failed\n");
	return (images);
}

uint32_t	get_texture_color(mlx_texture_t *texture, int y, int x)
{
	int		texture_pos;
	uint8_t	*pixel;

	if (x < 0 || x >= (int)texture->width || y < 0
		|| y >= (int)texture->height)
		return (0);
	texture_pos = y * texture->width + x;
	texture_pos *= texture->bytes_per_pixel;
	pixel = &texture->pixels[texture_pos];
	return (pixel[0] << 24 | pixel[1] << 16 | pixel[2] << 8 | pixel[3]);
}
