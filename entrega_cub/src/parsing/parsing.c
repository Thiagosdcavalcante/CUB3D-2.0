/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantana <tsantana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:49:06 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/28 16:51:56 by tsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/cub.h"

void	parsing(int argc, char **argv, t_cub *game)
{
	t_validate	valid;

	check_arguments(argc);
	check_extension(argv[1]);
	data_processing(argv[1], game->data);
	init_struct_variables(&valid);
	found_tabs(game->data);
	analyze_map_content(game->data, &valid);
	check_map_content(&valid);
	surrounded_by_walls(game->data);
}


