/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iswhitespace.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchimes <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/06 17:38:37 by lchimes           #+#    #+#             */
/*   Updated: 2017/06/06 17:38:39 by lchimes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_iswhitespace(int c)
{
	return (c == ' ' || c == '\t' || c == '\n'
			|| c == '\v' || c == '\f' || c == '\r');
}