/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_delete_first.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:13:55 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/07 17:14:59 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	*ft_delete_first(char *str)
{
	char	*tmp;

	if (ft_strlen(str) < 22)
		return (NULL);
	tmp = ft_strdup(&str[21]);
	free(str);
	str = ft_strdup(tmp);
	free(tmp);
	return (str);
}
