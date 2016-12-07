/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_morph_to_piece.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:21 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/07 13:24:08 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_is_that_ok(char **tab)
{
	int		nbtouch;
	int		x;
	int		y;

	nbtouch = 0;
	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
			if (tab[x][y] == '#')
			{
				if (tab[x][y + 1] == '#')
					nbtouch++;
				if (tab[x][y - 1] == '#')
					nbtouch++;
				if (tab[x + 1][y] == '#')
					nbtouch++;
				if (tab[x - 1][y] == '#')
					nbtouch++;
			}
	}
	if (nbtouch != 6 && nbtouch != 8)
		return (0);
	return (1);
}

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

char	**ft_morphing_to_piece(char **tab)
{
	char	**res;
	int		x;
	int		y;
	int		x2;
	int		y2;

	res = ft_malltab(max_x(tab), max_y(tab));
	x2 = 0;
	x = 0;
	y = 0;
	while (ft_is_k(tab[x], '#') == 0)
		x++;
	while (ft_is_k_fory(tab, '#', y) == 0)
		y++;
	while (res[x2])
	{
		y2 = 0;
		while (res[x2][y2])
			res[x2][y2++] = tab[x][y++];
		x++;
		x2++;
	}
	return (res);
}

char	**ft_verif_then_morph(char *str)
{
	char	**tab;
	int		x;
	int		y;
	int		i;

	tab = ft_malltab(4, 4);
	y = 0;
	i = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
			tab[x++][y] = str[i++];
		y++;
		i++;
	}
	if (ft_is_that_ok(tab) == 0)
		return (NULL);
	return (ft_morphing_to_piece(tab));
}
