/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initcursor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadrien <zadrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 03:09:04 by zadrien           #+#    #+#             */
/*   Updated: 2016/12/21 12:16:12 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_cursor	*ft_initcursor(t_cursor *lst)
{
	if ((lst = (t_cursor*)malloc(sizeof(t_cursor))) == NULL)
		return (NULL);
	lst->x = 0;
	lst->y = 0;
	return (lst);
}
