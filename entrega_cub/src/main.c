/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsantana <tsantana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:45:59 by leobarbo          #+#    #+#             */
/*   Updated: 2025/03/02 14:18:18 by tsantana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/cub.h"

int	main(int argc, char **argv)
{
	t_cub	game;

	init(&game);
	parsing(argc, argv, &game);
	printf("PARSSING OK\n");
	init_game(&game);
	return (EXIT_SUCCESS);
}
