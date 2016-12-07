/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_malltab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:16 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/07 13:14:17 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_malltab(int x, int y)
{
	char	**tab;
	int		i;

	i = 0;
	if ((tab = (char**)malloc(sizeof(char*) * (x + 1))) == 0)
		return (NULL);
	while (i < x)
	{
		if ((tab[i] = (char*)malloc(sizeof(char) * y + 1)) == 0)
			return (NULL);
		tab[i][y] = '\0';
		i++;
	}
	tab[i] = 0;
	return (tab);
}
