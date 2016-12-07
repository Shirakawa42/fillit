/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   number_of_char.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:53 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/07 13:14:54 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_number_of_char(char *str)
{
	int		i;
	int		nbc;

	i = 0;
	nbc = 0;
	while (str[i])
	{
		nbc++;
		if (str[i] == '\n')
			nbc = 0;
		if (nbc > 4)
			return (0);
		i++;
	}
	return (1);
}
