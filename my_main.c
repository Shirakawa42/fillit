/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:49 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/07 17:12:41 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

void	ft_tabstr(char **tab);

int		lv_main(int ac, char **av)
{
	int		fd;
	char	*fst;
	char	buf[560];
	char	*cpbuf;
	int		i;
	t_coord	*truc;
	t_coord	*save;

	if (ac != 2)
		return (0);
	fd = open(av[1], O_RDONLY);
	if ((read(fd, buf, 559)) == -1)
		return (0);
	cpbuf = ft_strdup(buf);
	if ((i = ft_number_of_pieces(buf)) == -1)
		return (0);
	if ((truc = (t_coord*)malloc(sizeof(t_coord))) == 0)
		return (0);
	save = truc;
	if (ft_isvalid_all(cpbuf) == 0)
		return (0);
	while (i)
	{
		if ((fst = ft_isole_first_piece(cpbuf)) == 0)
			return (0);
		cpbuf = ft_delete_first(cpbuf);
		if ((truc->tab = ft_verif_then_morph(fst)) == NULL)
			return (0);
		if (i == 1)
			truc->next = NULL;
		else
			if ((truc->next = (t_coord*)malloc(sizeof(t_coord))) == 0)
				return (0);
		free(fst);
		truc = truc->next;
		i--;

	}
	return (1);
}
