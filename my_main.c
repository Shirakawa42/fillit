#include "fillit.h"

int		main(int ac, char **av)
{
	int		fd;
	char	*fst;
	char	buf[560];
	int		i;
	char	c;
	coord_t	*truc;

	c = 'A';
	if (ac != 2)
		return (0);
	fd = open(av[1], O_RDONLY);
	if ((open(fd, buf, 560)) == -1)
		return (0);
	i = ft_number_of_pieces(buf);
	truc = (coord_t*)malloc(sizeof(coord_t) * i);
	while (i)
	{
		fst = ft_isole(buf);
		buf = ft_delete_first(buf);
		truc->tab = ft_verif_then_morph(fst);
		truc = truc->next;
		c++;
		i--;
	}
}
