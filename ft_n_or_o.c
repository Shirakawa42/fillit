/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_n_or_o.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:26 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/07 13:14:28 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_n_or_o(char *str)
{
	int		i;
	int		nbn;

	i = 0;
	nbn = 0;
	while (str[i])
	{
		if (str[i] != '\n' && nbn == 4)
			return (0);
		else if (str[i] == '\n')
			nbn++;
		else
			nbn = 0;
		i++;
	}
	if (str[i - 1] == '\n')
		return (0);
	return (1);
}
