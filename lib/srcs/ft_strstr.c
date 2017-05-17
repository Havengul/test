/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtheron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/10 11:43:16 by chtheron          #+#    #+#             */
/*   Updated: 2016/05/14 11:33:11 by chtheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *big, const char *little)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	x;

	j = ft_strlen(little);
	i = 0;
	x = 0;
	if (j == 0)
		return ((char *)big);
	while (big[i])
	{
		while (little[x] == big[i + x])
		{
			if (x == j - 1)
				return ((char *)big + i);
			x++;
		}
		x = 0;
		i++;
	}
	return (0);
}
