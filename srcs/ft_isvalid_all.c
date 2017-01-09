/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isvalid_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:11 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/07 17:14:43 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_isvalid_all(char *str)
{
	if (ft_number_of_char(str) == 0)
		return (0);
	if (ft_n_or_o(str) == 0)
		return (0);
	return (1);
}
