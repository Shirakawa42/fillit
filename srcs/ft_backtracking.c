/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_backtracking.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadrien <zadrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 03:03:21 by zadrien           #+#    #+#             */
/*   Updated: 2017/01/09 14:16:12 by zadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_cursor	*ft_initcursor(t_cursor *lst)
{
	if ((lst = (t_cursor*)malloc(sizeof(t_cursor))) == NULL)
		return (NULL);
	lst->x = 0;
	lst->y = 0;
	return (lst);
}

void		ft_solverfillit(t_coord *piece, int nbp)
{
	int		x;
	char	**tab;

	x = ft_sizetab(nbp);
	tab = ft_tabset(x, x);
	while (ft_backtracking(tab, piece) == 0)
	{
		x++;
		ft_tabfree(tab);
		tab = ft_tabset(x, x);
	}
	ft_tabprint(tab);
}

int			ft_backtracking(char **tab, t_coord *p)
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
