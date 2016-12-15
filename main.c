/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <lvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:32:18 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/14 16:45:53 by zadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		main(int ac, char **av)
{
	t_coord	*truc;
	t_coord	*start;
	int		nbp;
	int		i;

	i = 0;
	nbp = 0;
	if (ac != 2)
		ft_putstr("usage: ./fillit valid_tetriminos_file\n");
	else if ((truc = lv_premain(av, nbp)) == NULL)
		ft_putstr("error\n");
	else
	{
		start = truc;
		while (truc)
		{
			truc = truc->next;
			i++;
		}
		start = ft_coord(start);
		ft_solverfillit(start, i);
	}
	return (0);
}
