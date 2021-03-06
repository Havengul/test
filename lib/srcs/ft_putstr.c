/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chtheron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 17:25:01 by chtheron          #+#    #+#             */
/*   Updated: 2016/05/13 17:25:48 by chtheron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putstr(char const *s)
{
	if (s)
		while (*s != '\0')
		{
			write(1, &(*s), 1);
			s++;
		}
}
