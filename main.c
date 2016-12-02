#include "fillit.h"

int		main(int ac, char **av)
{
	int		fd;

	if (ac != 2)
	{
		write(1, "fillit: missing Tetriminos file.\n", 33);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (valid_tetriminos(fd) == 1)
	{
		write(1, "ok\n", 3);
	}
	else
		write(1, "error", 5);
	return (0);
}
