/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initcursor.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadrien <zadrien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/14 03:09:04 by zadrien           #+#    #+#             */
/*   Updated: 2016/12/14 03:09:24 by zadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_cursor	*ft_initcursor(t_cursor *lst)
{
	lst = (t_cursor*)malloc(sizeof(t_cursor));
	lst->x = 0;
	lst->y = 0;
	return (lst);
}
