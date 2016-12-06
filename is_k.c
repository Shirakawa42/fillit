#include "fillit.h"

int		ft_is_k(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

int		ft_is_k_fory(char **tab, char c, int y)
{
	int		x;

	x = 0;
	while (x < 4)
	{
		if (tab[x][y] == c)
			return (1);
		x++;
	}
	return (0);
}
