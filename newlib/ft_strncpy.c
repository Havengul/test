/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 15:17:39 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/19 15:17:41 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;
	size_t		j;

	i = 0;
	j = ft_strlen(dst);
	while (src[i])
	{
		dst[i + j] = src[i];
		i++;
	}
	dst[i + j] = '\0';
	while (i < len)
	{
		dst[i + j] = '\0';
		i++;
	}
	return (dst);
}
