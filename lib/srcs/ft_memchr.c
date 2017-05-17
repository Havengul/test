/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtheron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 09:56:59 by chtheron          #+#    #+#             */
/*   Updated: 2016/05/13 09:58:03 by chtheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s1, int c, size_t n)
{
	char a;
	char *str1;

	a = (unsigned char)c;
	str1 = (char*)s1;
	while (n--)
	{
		if (*str1 == a)
			return (str1);
		str1++;
	}
	return (NULL);
}
