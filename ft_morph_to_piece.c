/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_morph_to_piece.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:21 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/16 12:07:42 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_morphing_to_piece_before(char **tab, int l)
{
	int		x[6];

	x[2] = 0;
	x[0] = 0;
	x[1] = 0;
	x[4] = max_x(tab);
	x[5] = max_y(tab);
	return (ft_morphing_to_piece(tab, l, x));
}

char	**ft_morphing_to_piece(char **tab, int l, int x[6])
{
	char	**res;

	while (ft_is_k(tab[x[0]], '#') == 0)
		x[0]++;
	while (ft_is_k_fory(tab, '#', x[1]) == 0)
		x[1]++;
	if (l == 2)
		x[4]++;
	if (l == 3)
		x[5] += 1;
	res = ft_malltab(x[4], x[5]);
	while (x[2] < x[4])
	{
		x[3] = 0;
		while (x[3] < x[5])
			res[x[2]][x[3]++] = tab[x[0]][x[1]++];
		x[1] = x[1] - x[5];
		x[0]++;
		x[2]++;
	}
	ft_tabfree(tab);
	return (res);
}

char	**ft_verif_then_morph(char *str)
{
	char	**tab;
	int		x;
	int		y;
	int		i;
	int		to[3];

	if ((tab = ft_malltab(4, 4)) == NULL)
		return (NULL);
	x = 0;
	i = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4 && str[i])
			tab[x][y++] = str[i++];
		x++;
		i++;
	}
	if (ft_is_that_ok(tab, to) == 0)
		return (NULL);
	tab = ft_morphing_to_piece_before(tab, ft_is_that_ok(tab, to));
	return (tab);
}
