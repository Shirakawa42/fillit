/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_morph_to_piece.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:21 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/07 17:14:25 by lvasseur         ###   ########.fr       */
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
				if (y < 3 && tab[x][y + 1] == '#')
					nbtouch++;
				if (y > 0 && tab[x][y - 1] == '#')
					nbtouch++;
				if (x < 3 && tab[x + 1][y] == '#')
					nbtouch++;
				if (x > 0 && tab[x - 1][y] == '#')
					nbtouch++;
			}
	}
	if (nbtouch != 6 && nbtouch != 8)
		return (0);
	if (nbtouch == 6 && max_x(tab) == 2)
		return (2);
	if (nbtouch == 6 && max_y(tab) == 2)
		return (3);
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

char	**ft_morphing_to_piece(char **tab, int l)
{
	char	**res;
	int		x;
	int		y;
	int		x2;
	int		y2;
	int		h[2];

	x2 = 0;
	x = 0;
	y = 0;
	h[0] = max_x(tab);
	h[1] = max_y(tab);
	while (ft_is_k(tab[x], '#') == 0)
		x++;
	while (ft_is_k_fory(tab, '#', y) == 0)
		y++;
	if (l == 2)
		h[0]++;
	if (l == 3)
		h[1]++;
	res = ft_malltab(h[0], h[1]);
	while (x2 < h[0])
	{
		y2 = 0;
		while (y2 < h[1])
			res[x2][y2++] = tab[x][y++];
		y = y - max_y(tab);
		x++;
		x2++;
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
	if (ft_is_that_ok(tab) == 0)
		return (NULL);
	tab = ft_morphing_to_piece(tab, ft_is_that_ok(tab));
	return (tab);
}
