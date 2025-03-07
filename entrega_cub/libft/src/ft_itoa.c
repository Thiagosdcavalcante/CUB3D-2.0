/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: leobarbo <leobarbo@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 00:37:18 by leobarbo          #+#    #+#             */
/*   Updated: 2025/02/20 00:37:18 by leobarbo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	size_n(long int n)
{
	long int	size;

	size = 0;
	if (n == 0)
		size++;
	if (n < 0)
	{
		n = -n;
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char		*str;
	char		result;
	long int	size;
	long int	nbr;

	nbr = n;
	size = size_n(nbr);
	str = ft_calloc((size + 1), sizeof(char));
	if (!str)
		return (NULL);
	if (nbr == 0)
		str[0] = n + '0';
	if (nbr < 0)
	{
		nbr *= -1;
		str[0] = '-';
	}
	while (size-- && nbr != 0)
	{
		result = nbr % 10 + '0';
		str[size] = result;
		nbr /= 10;
	}
	return (str);
}
