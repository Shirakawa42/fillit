/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_there_invalid.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:44 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/07 17:12:52 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		is_there_invalid(char *str)
{
	int		i;
	int		nbp;
	int		nbd;

	i = 0;
	nbp = 0;
	nbd = 0;
	while (str[i])
	{
		if (str[i] == '#')
			nbd++;
		else if (str[i] == '.')
			nbp++;
		else if (str[i] != '\n')
			return (0);
		i++;
	}
	if (nbp / 3 != nbd)
		return (0);
	return (1);
}
