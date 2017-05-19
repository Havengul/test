/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/19 15:27:57 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/19 15:27:58 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	int		l1;
	int		l2;
	int		i;

	l1 = ft_strlen(s1);
	l2 = ft_strlen(s2);
	i = 0;
	ret = (char *)ft_memalloc(sizeof(char) * (l1 + l2 - 1));
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	i = 0;
	while (i <= l2)
	{
		ret[i + l1] = s2[i];
		i++;
	}
	return (ret);
}
