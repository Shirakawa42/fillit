/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/07 13:13:49 by lvasseur          #+#    #+#             */
/*   Updated: 2016/12/07 13:21:50 by lvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H

# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include "libft/libft.h"

int				ft_number_of_pieces(char *str);
char			**ft_tabdup(char **tab);
char			*ft_delete_first(char *str);
char			*ft_isole_pieces(char *str);
char			**ft_morphing_to_piece(char **tab);
int				ft_is_k(char *str, char c);
int				ft_is_k_fory(char **tab, char c, int y);
char			**ft_malltab(int x, int y);
char			*ft_isole_first_piece(char *str);
char			**ft_verif_then_morph(char *str);
int				ft_number_of_char(char *str);
int				is_there_invalid(char *str);
int				ft_n_or_o(char *str);
int				ft_is_that_ok(char **tab);
int				max_x(char **tab);
int				max_y(char **tab);
int				ft_isvalid_all(char *str);

typedef struct	s_coord
{
	char			**tab;
	struct s_coord	*next;
}				t_coord;

#endif
