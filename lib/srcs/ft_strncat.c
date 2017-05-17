/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtheron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 09:23:26 by chtheron          #+#    #+#             */
/*   Updated: 2016/05/14 11:28:43 by chtheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *s;

	s = s1;
	while (*s1)
		s1++;
	while (*s2 && (int)n-- > 0)
		*s1++ = *s2++;
	*s1 = '\0';
	return (s);
}