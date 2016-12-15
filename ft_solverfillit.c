/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solverfillit.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadrien <zadrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 03:05:37 by zadrien           #+#    #+#             */
/*   Updated: 2016/12/14 16:51:22 by zadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_solverfillit(t_coord *piece, int nbp)
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
