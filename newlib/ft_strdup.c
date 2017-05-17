/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 18:13:39 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/17 18:21:52 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;

	if (s1 == NULL)
		return (NULL);
	str = (char *)ft_memalloc(sizeof(char) * ft_strlen(s1));
	str = ft_strcpy(str, s1);
	return (str);
}
