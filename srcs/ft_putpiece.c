/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpiece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadrien <zadrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 03:01:41 by zadrien           #+#    #+#             */
/*   Updated: 2017/01/05 19:17:28 by zadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			ft_resetp(char **tab, t_coord *c)
{
	int		x;
	int		y;

	y = 0;
	while (tab[y])
	{
		x = 0;
		while (tab[y][x])
		{
			if (tab[y][x] == c->c)
				tab[y][x] = '.';
			x++;
		}
		y++;
	}
}

int				ft_checkmat(char **mat, char c)
{
	int		i;
	int		j;
	int		caract;

	i = 0;
	j = 0;
	caract = 0;
	while (mat[i])
	{
		j = 0;
		while (mat[i][j])
		{
			if (mat[i][j] == c)
				caract++;
			j++;
		}
		i++;
	}
	if (caract == 4)
		return (1);
	return (0);
}

static int		ft_dots(char **pie)
{
	int		i;

	i = 0;
	while (pie[0][i] == '.')
		i++;
	return (i);
}

int				ft_putpiece(char **tab, t_cursor *t, t_coord *p)
{
	int		i;
	int		j;
	int		dotsx;

	i = -1;
	j = -1;
	dotsx = ft_dots(p->tab);
	if (t->x == 0 && dotsx > 0)
		return (0);
	while (++i != 4)
	{
		if ((t->y + p->coord[i][0]) >= (int)ft_strlen(tab[0]))
			return (0);
		if (tab[t->y + p->coord[i][0]][t->x + p->coord[i][1] - dotsx] == '.')
			tab[t->y + p->coord[i][0]][t->x + p->coord[i][1] - dotsx] = p->c;
	}
	if (ft_checkmat(tab, p->c) != 1)
		return (0);
	return (1);
}
