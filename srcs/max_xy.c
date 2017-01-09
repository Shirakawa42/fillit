/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max_xy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 12:56:30 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/08 12:57:28 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		max_x(char **tab)
{
	int		x;
	int		y;
	int		tmp;
	int		res;

	y = 0;
	tmp = 0;
	res = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			if (tab[x][y] == '#')
				tmp++;
			x++;
		}
		if (tmp > res)
			res = tmp;
		tmp = 0;
		y++;
	}
	return (res);
}

int		max_y(char **tab)
{
	int		x;
	int		y;
	int		tmp;
	int		res;

	x = 0;
	tmp = 0;
	res = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			if (tab[x][y] == '#')
				tmp++;
			y++;
		}
		if (tmp > res)
			res = tmp;
		tmp = 0;
		x++;
	}
	return (res);
}
