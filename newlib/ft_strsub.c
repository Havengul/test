/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 14:27:07 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/19 14:27:10 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ret;

	ret = (char *)ft_memalloc(sizeof(char) * len);
	ret[len] = '\0';
	while (len > 0)
	{
		len--;
		ret[len] = s[len + start];
	}
	return (ret);
}
