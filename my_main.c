/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_main.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <lvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:14:49 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/12 15:56:53 by zadrien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

t_coord		*lv_premain(char **av, int nbp)
{
	char	buf[560];
	char	*cpbuf;
	int		i;
	char	c;
	t_coord	*truc;

	if ((truc = (t_coord*)malloc(sizeof(t_coord))) == NULL)
		return (NULL);
	i = open(av[1], O_RDONLY);
	if (read(i, buf, 559) == -1)
		return (NULL);
	if ((cpbuf = ft_strdup(buf)) == NULL)
		return (NULL);
	if ((nbp = ft_number_of_pieces(cpbuf)) == -1)
		return (NULL);
	c = 'A';
	return (lv_main(cpbuf, nbp, c, truc));
}

int			max_y_piece(char **tab)
{
	int		y;

	y = 0;
	while (tab[y])
		y++;
	return (y);
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
		truc->max_x = ft_strlen(truc->tab[0]);
		truc->max_y = max_y_piece(truc->tab);
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
