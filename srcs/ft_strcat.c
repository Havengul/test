/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 17:43:07 by lchimes           #+#    #+#             */
/*   Updated: 2017/06/06 17:43:09 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int		i;
	int		h;

	i = ft_strlen(s1);
	h = 0;
	while (s2[h] != '\0')
	{
		s1[i + h] = s2[h];
		h++;
	}
	s1[i + h] = '\0';
	return (s1);
}
