/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_vector.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:36:06 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:36:06 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_vector	create_vector(float x, float y)
{
	t_vector	vector;

	vector.x = x;
	vector.y = y;
	return (vector);
}
