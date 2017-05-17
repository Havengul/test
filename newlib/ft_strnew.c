/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 18:14:46 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/17 18:14:47 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*newstr;
	size_t	i;

	newstr = (char *)ft_memalloc(sizeof(char) * size);
	i = 0;
	while (i <= size)
	{
		newstr[i] = '\0';
		i++;
	}
	return (newstr);
}
