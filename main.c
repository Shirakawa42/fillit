/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:32:18 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/09 15:56:41 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

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
	return (0);
}
