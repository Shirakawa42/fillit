/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_k.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:40 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/07 13:14:41 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_is_k(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int		ft_is_k_fory(char **tab, char c, int y)
{
	int		x;

	x = 0;
	while (x < 4)
	{
		if (tab[x][y] == c)
			return (1);
		x++;
	}
	return (0);
}
