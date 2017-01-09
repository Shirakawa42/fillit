/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadrien <zadrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 02:48:12 by zadrien           #+#    #+#             */
/*   Updated: 2017/01/05 19:18:36 by zadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void			ft_tabprint(char **tab)
{
	int		i;

	i = -1;
	while (tab[++i])
		ft_putendl(tab[i]);
}

static void		ft_tabstr(char **tab, int x)
{
	int		i;
	char	*word;

	i = -1;
	if (!(word = (char*)malloc(sizeof(char) * (x + 1))))
		return ;
	while (++i < x)
		word[i] = '.';
	word[i] = '\0';
	*tab = word;
}

char			**ft_tabset(int y, int x)
{
	int		i;
	char	**tab;

	if (!y)
		return (NULL);
	if (!(tab = (char**)malloc(sizeof(char*) * (y + 1))))
		return (NULL);
	tab[y] = 0;
	i = -1;
	while (++i < y)
		ft_tabstr(&tab[i], x);
	return (tab);
}
