/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 18:15:35 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/17 18:21:05 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		i;
	int		start;
	int		end;
	char	*ret;

	start = 0;
	i = 0;
	end = ft_strlen(s) - 1;
	while (s[start] && ft_iswhitespace(s[start]) == 1)
		start++;
	while (s[end] && ft_iswhitespace(s[end]) == 1)
		end--;
	ret = (char *)malloc(sizeof(char) * end - start + 1);
	while (start <= end)
	{
		ret[i] = s[start];
		start++;
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
