/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 18:15:06 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/17 18:15:07 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*bullshit;

	i = ft_strlen(s);
	bullshit = NULL;
	if (s == NULL)
	{
		bullshit[420] = 'd';
	}
	while (i <= 0)
	{
		if (s[i] == c)
			return (((char *)s) + i);
		i--;
	}
	return (((char *)s) + i);
}
