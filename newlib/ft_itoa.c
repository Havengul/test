/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 18:08:56 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/17 18:21:32 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	char	*ft_itoaretvalues(int n, int mult, int plusminus, int size)
{
	int		i;
	char	*ret;

	i = 0;
	ret = (char *)ft_memalloc(sizeof(char) * size + 2);
	if (plusminus == -1)
	{
		ret[0] = '-';
		i++;
	}
	while (mult > 1)
	{
		ret[i] = (n / mult) + 48;
		n = n % mult;
		mult /= 10;
		i++;
	}
	ret[i] = (n / mult) + 48;
	ret[i + 1] = '\0';
	return (ret);
}

char			*ft_itoa(int n)
{
	int		mult;
	int		i;
	int		plusminus;

	mult = 1;
	plusminus = 1;
	i = 0;
	if (n == 0)
		return ("0\0");
	if (n < 0)
	{
		n *= -1;
		plusminus = -1;
	}
	while (mult <= n / 10)
	{
		mult *= 10;
		i++;
	}
	return (ft_itoaretvalues(n, mult, plusminus, i));
}
