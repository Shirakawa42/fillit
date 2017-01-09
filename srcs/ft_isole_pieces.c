/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isole_pieces.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:02 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/07 17:14:49 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_isole_first_piece(char *str)
{
	char	*tmp;
	int		nbn;
	int		i;

	nbn = 0;
	i = 0;
	while (nbn != 4 && str[i])
	{
		if (str[i] == '\n')
			nbn++;
		i++;
	}
	if (nbn != 3 && !str[i])
		return (NULL);
	if (nbn == 4)
	{
		str[i - 1] = '\0';
		tmp = ft_strdup(str);
		str[i - 1] = '\n';
		return (tmp);
	}
	return (str);
}
