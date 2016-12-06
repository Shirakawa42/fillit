#ifndef FILLIT_H

# define FILLIT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include "libft/libft.h"

int		ft_number_of_pieces(char *str);
char	**ft_tabdup(char **tab);
char	*ft_delete_first(char *str);
char	*ft_isole_pieces(char *str);
char	**ft_morph_to_piece(char *str);
int		ft_is_k(char *str, char c);
int		ft_is_k_fory(char **tab, char c, int y);

typedef struct	coord coord
{
	char	c;
	char	**tab;
	coord	*next;
}				t_coord;

#endif
