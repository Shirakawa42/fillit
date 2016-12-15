/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number_of_pieces.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:31 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/08 11:45:07 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int			ft_number_of_pieces(char *str)
{
	int		i;
	int		nbn;
	int		tmp;

	i = 0;
	nbn = 0;
	tmp = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			nbn++;
			tmp++;
		}
		if (tmp == 5)
		{
			tmp = 0;
			nbn--;
		}
		i++;
	}
	if ((nbn + 1) % 4 != 0)
		return (-1);
	return ((nbn + 1) / 4);
}
