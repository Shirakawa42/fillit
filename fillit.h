/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <lvasseur@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:13:49 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/15 14:25:48 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include "libft.h"

typedef struct	s_coord
{
	char			c;
	char			**tab;
	int				max_x;
	int				max_y;
	int				coord[4][2];
	struct s_coord	*next;
}				t_coord;

typedef struct	s_cursor
{
	int		x;
	int		y;
}				t_cursor;

int				ft_number_of_pieces(char *str);
char			**ft_tabdup(char **tab);
char			*ft_delete_first(char *str);
char			*ft_isole_pieces(char *str);
char			**ft_morphing_to_piece(char **tab, int l, int x[6]);
char			**ft_morphing_to_piece_before(char **tab, int l);
int				ft_is_k(char *str, char c);
int				ft_is_k_fory(char **tab, char c, int y);
char			**ft_malltab(int x, int y);
char			*ft_isole_first_piece(char *str);
char			**ft_verif_then_morph(char *str);
int				ft_number_of_char(char *str);
int				is_there_invalid(char *str);
int				ft_n_or_o(char *str);
int				ft_is_that_ok(char **tab, int x[3]);
int				max_x(char **tab);
int				max_y(char **tab);
int				ft_isvalid_all(char *str);
t_coord			*lv_main(char *cpbuf, int i, char c, t_coord *truc);
t_coord			*lv_premain(char **av, int nbp);
void			ft_tabfree(char **tab);
int				ft_number_of_x(char **tab);
int				ft_number_of_y(char **tab);
int				max_x_piece(char **tab);
char			**ft_tabset(int x, int y);
void			ft_tabprint(char **tab);
t_cursor		*ft_initcursor(t_cursor *lst);
void			ft_resetp(char **tab, t_coord *c);
int				ft_checkmat(char **mat, char c);
int				ft_putpiece(char **tab, t_cursor *t, t_coord *p);
int				ft_backtracking(char **tab, t_coord *p);
void			ft_solverfillit(t_coord *piece, int nbp);
t_coord			*ft_coord(t_coord *truc);
int				ft_sizetab(int nbp);

#endif
