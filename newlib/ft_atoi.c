/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/17 18:07:12 by lchimes           #+#    #+#             */
/*   Updated: 2017/05/17 18:07:13 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		plusminus;
	int		ret;
	char	*trimstr;

	i = 0;
	plusminus = 1;
	ret = 0;
	trimstr = ft_strdup(ft_strtrim(str));
	if (str[0] == '-')
	{
		i++;
		plusminus = -1;
	}
	while (str[i] && ft_isdigit(str[i]) == 1)
	{
		ret *= 10;
		ret += (str[i] - 48);
		i++;
	}
	return (ret * plusminus);
}
