/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countword.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadrien <zadrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 18:44:59 by zadrien           #+#    #+#             */
/*   Updated: 2016/11/24 20:48:33 by zadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_countword(char *str)
{
	int		i;
	int		w;

	i = 0;
	w = 0;
	while (str[i] != '\0')
	{
		if (str[i] != '\n' || str[i] != '\t' || str[i] != '\v' ||
				str[i] != ' ' || str[i] != '\r' || str[i] != '\f')
		{
			w++;
			while (str[i] != '\n' || str[i] != '\t' || str[i] != '\v' ||
					str[i] != ' ' || str[i] != '\r' || str[i] != '\f')
				i++;
		}
		else
			i++;
	}
	return (w);
}
