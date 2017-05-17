/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 18:15:12 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/17 18:15:13 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_count_words(const char *str, char c)
{
	int		i;
	int		ret;

	i = 0;
	ret = 1;
	while (str[i])
	{
		if (str[i] == c)
			ret++;
		i++;
	}
	return (ret);
}

static	char	*ft_savelines()
{

}

char			**ft_strsplit(char const *s, char c)
{
	char	*str;
	char	**strarr;
	int		i;
	int		j;
	int		arrnum;

	i = 0;
	j = 0;
	arrnum = 0;
	str = ft_strctrim(s, c);
	strarr = (char **)malloc(sizeof(*strarr) * ft_count_words(s, c) + 1);
	while (str[i])
	{
		j = 0;
		while (str[i + j] && str[i + j] != c)
			j++;
		if (str[i] != c)
			strarr[arrnum] = (char *)malloc(sizeof(char) * j);
		j = 0;
		while (str[i] && str[i] != c)
		{
			strarr[arrnum][j] = str[i];
			i++;
			j++;
		}
		if (str[i] == c)
		{
			strarr[arrnum][j] = '\0';
			arrnum++;
		}
		if (str[i] == '\0')
			i--;
		i++;
	}
	strarr[arrnum + 1] = NULL;
	free(str);
	return (strarr);
}
