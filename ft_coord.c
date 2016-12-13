#include "fillit.h"

t_coord		*ft_coord(t_coord *truc)
{
	t_coord		*save;
	int			x;
	int			y;
	int			count;

	save = truc;
	while (truc)
	{
		x = -1;
		count = 0;
		while (truc->tab[++x])
		{
			y = -1;
			while (truc->tab[x][++y])
			{
				if (truc->tab[x][y] == '#')
				{
					truc->coord[count][0] = x;
					truc->coord[count++][1] = y;
				}
			}
		}
		truc = truc->next;
	}
	return (save);
}
