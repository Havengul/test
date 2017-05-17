/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtheron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 14:48:44 by chtheron          #+#    #+#             */
/*   Updated: 2016/11/23 10:43:31 by chtheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int		ft_count_parts(const char *s, char c)
{
	int		i;
	int		sub;

	sub = 0;
	i = 0;
	while (*s != '\0')
	{
		if (sub == 1 && *s == c)
			sub = 0;
		if (sub == 0 && *s != c)
		{
			sub = 1;
			i++;
		}
		s++;
	}
	return (i);
}

static int		ft_word_len(const char *s, char c)
{
	int		len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**t;
	int		nb_word;
	int		index;

	index = 0;
	nb_word = ft_count_parts((const char *)s, c);
	t = (char **)ft_memalloc(sizeof(*t)
	* (ft_count_parts((const char *)s, c) + 1));
	if (t == NULL)
		return (NULL);
	while (nb_word--)
	{
		while (*s == c && *s != '\0')
			s++;
		t[index] = ft_strsub((const char *)s,
		0, ft_word_len((const char *)s, c));
		if (t[index] == NULL)
			return (NULL);
		s = s + ft_word_len(s, c);
		index++;
	}
	t[index] = NULL;
	return (t);
}