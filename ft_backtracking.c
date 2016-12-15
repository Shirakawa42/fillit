/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadrien <zadrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 03:03:21 by zadrien           #+#    #+#             */
/*   Updated: 2016/12/14 16:31:20 by zadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_backtracking(char **tab, t_coord *p)
{
	t_cursor	*t;
	t_cursor	tmp;

	t = NULL;
	t = ft_initcursor(t);
	if (!p)
		return (1);
	t->y = 0;
	while (tab[t->y])
	{
		t->x = -1;
		while (tab[t->y][++t->x])
		{
			tmp = *t;
			if (tab[t->y][t->x] == '.')
			{
				if (ft_putpiece(tab, &tmp, p) == 1)
					if (ft_backtracking(tab, p->next) == 1)
						return (1);
				ft_resetp(tab, p);
			}
		}
		t->y++;
	}
	return (0);
}
