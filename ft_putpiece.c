/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpiece.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadrien <zadrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 03:01:41 by zadrien           #+#    #+#             */
/*   Updated: 2016/12/14 17:26:13 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"
#include <stdio.h>

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
