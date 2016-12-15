/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkmat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadrien <zadrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 03:13:16 by zadrien           #+#    #+#             */
/*   Updated: 2016/12/14 03:16:13 by zadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_checkmat(char **mat, char c)
{
	int		i;
	int		j;
	int		caract;

	i = 0;
	j = 0;
	caract = 0;
	while (mat[i])
	{
		j = 0;
		while (mat[i][j])
		{
			if (mat[i][j] == c)
				caract++;
			j++;
		}
		i++;
	}
	if (caract == 4)
		return (1);
	return (0);
}
