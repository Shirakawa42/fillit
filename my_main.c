/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:49 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/08 13:23:05 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_coord		*lv_premain(char **av)
{
	char	buf[560];
	char	*cpbuf;
	int		i[2];
	char	c;
	t_coord	*truc;

	if ((truc = (t_coord*)malloc(sizeof(t_coord))) == NULL)
		return (NULL);
	i[0] = open(av[1], O_RDONLY);
	if (read(i[0], buf, 559) == -1)
		return (NULL);
	if ((cpbuf = ft_strdup(buf)) == NULL)
		return (NULL);
	if ((i[1] = ft_number_of_pieces(cpbuf)) == -1)
		return (NULL);
	c = 'A';
	return (lv_main(cpbuf, i[1], c, truc));
}

t_coord		*lv_main(char *cpbuf, int i, char c, t_coord *truc)
{
	char	*fst;
	t_coord	*save;

	save = truc;
	if (ft_isvalid_all(cpbuf) == 0)
		return (NULL);
	while (i)
	{
		truc->c = c++;
		fst = ft_isole_first_piece(cpbuf);
		cpbuf = ft_delete_first(cpbuf);
		if ((truc->tab = ft_verif_then_morph(fst)) == NULL)
			return (NULL);
		if (i == 1)
			truc->next = NULL;
		else if ((truc->next = (t_coord*)malloc(sizeof(t_coord))) == 0)
			return (NULL);
		free(fst);
		truc = truc->next;
		i--;
	}
	free(cpbuf);
	return (save);
}
