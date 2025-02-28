/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:45:43 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:45:43 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

static void	handle_mlx_actions(t_cub *game)
{
	mlx_set_setting(MLX_STRETCH_IMAGE, true);
	game->mlx = mlx_init(WIDTH, HEIGHT, "CUB3D", true);
	if (!game->mlx)
		handle_error("Error: mlx_init failed.");
	game->mlx_image = mlx_new_image(game->mlx, WIDTH, HEIGHT);
	if (!game->mlx_image)
		handle_error("Error open window.\n");
	if (mlx_image_to_window(game->mlx, game->mlx_image, 0, 0) < 0)
		handle_error("Error mlx_image_to_window.\n");
}

int	init_game(t_cub *game)
{
	handle_mlx_actions(game);
	load_textures(game);
	setup(game);
	mlx_key_hook(game->mlx, hook_key_press, game);
	mlx_loop_hook(game->mlx, draw_playerview, game);
	mlx_close_hook(game->mlx, hook_close, game);
	mlx_loop(game->mlx);
	mlx_terminate(game->mlx);
	return (EXIT_SUCCESS);
}