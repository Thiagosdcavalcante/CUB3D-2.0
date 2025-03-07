/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:42:29 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:42:29 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	calculation_size(char const *s1, char const *set, int size_start)
{
	int	size;
	int	end;

	end = ft_strlen(s1);
	while (end >= size_start && ft_strchr(set, s1[end]))
		end--;
	size = end - size_start + 1;
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*copy_s1;
	int		i;
	int		size;
	int		start;

	i = 0;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	size = calculation_size(s1, set, start);
	if (size < 0)
		size = 0;
	copy_s1 = ft_calloc((size + 1), sizeof(char));
	if (!copy_s1)
		return (NULL);
	while (i < size)
	{
		copy_s1[i] = s1[start + i];
		i++;
	}
	return (copy_s1);
}
