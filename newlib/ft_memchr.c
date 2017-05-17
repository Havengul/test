/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 18:09:21 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/17 18:09:22 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	comp;
	char	curstr;
	char	*ret;

	i = 0;
	comp = (unsigned char)c;
	curstr = (unsigned char)s;
	while (i <= n)
	{
		curstr = (unsigned char)(s + i);
		if (curstr == comp)
		{
			ret = (char *)(s + i);
			return (ret);
		}
		i++;
	}
	return (NULL);
}
