/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:32:18 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/08 13:25:49 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_tabstr(char **tab)
{
	ft_putstr("result:\n");
	while (*tab)
	{
		ft_putstr(*tab++);
		ft_putchar('\n');
	}
}

int		main(int ac, char **av)
{
	t_coord	*truc;

	if (ac != 2)
	{
		ft_putstr("usage: ./fillit valid_tetriminos_file\n");
		return (0);
	}
	if ((truc = lv_premain(av)) == NULL)
	{
		ft_putstr("error\n");
		return (0);
	}
	while (truc)
	{
		ft_tabstr(truc->tab);
		truc = truc->next;
	}
	return (0);
}
