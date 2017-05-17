/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 18:09:55 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/17 18:09:56 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	void	*ret;

	ret = (void *)malloc(sizeof(void) * len);
	i = 0;
	while (i <= len)
	{
		((char *)ret)[i] = ((char *)dst)[i];
		((char *)dst)[i] = ((char *)src)[i];
		i++;
	}
	return (ret);
}
