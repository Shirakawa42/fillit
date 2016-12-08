/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_that_ok.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 13:30:22 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/08 13:35:28 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_number_of_x(char **tab)
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (tab[i])
	{
		if (ft_is_k(tab[i], '#') == 1)
			nb++;
		i++;
	}
	return (nb);
}

int		ft_is_that_ok(char **tab, int x[3])
{
	x[2] = 0;
	x[1] = -1;
	while (++x[1] < 4)
	{
		x[0] = -1;
		while (++x[0] < 4)
			if (tab[x[0]][x[1]] == '#')
			{
				if (x[1] < 3 && tab[x[0]][x[1] + 1] == '#')
					x[2]++;
				if (x[1] > 0 && tab[x[0]][x[1] - 1] == '#')
					x[2]++;
				if (x[0] < 3 && tab[x[0] + 1][x[1]] == '#')
					x[2]++;
				if (x[0] > 0 && tab[x[0] - 1][x[1]] == '#')
					x[2]++;
			}
	}
	if (x[2] != 6 && x[2] != 8)
		return (0);
	if (x[2] == 6 && max_x(tab) == 2 && ft_number_of_x(tab) == 3)
		return (2);
	if (x[2] == 6 && max_y(tab) == 2)
		return (3);
	return (1);
}
