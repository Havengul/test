/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 18:09:32 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/17 18:09:33 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((unsigned char)(s1 + i) == (unsigned char)(s2 + i) && i < n)
		i++;
	return ((unsigned char)(s1 + i) - (unsigned char)(s2 + i));
}
