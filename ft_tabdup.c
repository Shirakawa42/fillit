/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:36 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/07 17:13:23 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_tabdup(char **tab)
{
	char	**cpy;
	int		i;
	int		j;
	int		nbofstr;

	nbofstr = 0;
	i = 0;
	while (tab[i])
		i++;
	if ((cpy = (char**)malloc(sizeof(char*) * (nbofstr + 1))) == 0)
		return (0);
	cpy[nbofstr + 1] = 0;
	i = 0;
	while (tab[i])
	{
		j = -1;
		if ((cpy[i] = (char*)malloc(sizeof(char) * (ft_strlen(tab[i])
							+ 1))) == 0)
			return (0);
		while (tab[i][++j])
			cpy[i][j] = tab[i][j];
		cpy[i++][j] = '\0';
	}
	cpy[i] = 0;
	return (cpy);
}
