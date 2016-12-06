#include "fillit.h"

int		ft_number_of_char(char *str)
{
	int		i;
	int		nbc;

	i = 0;
	nbc = 0;
	while (str[i])
	{
		nbc++;
		if (str[i] == '\n')
			nbc = 0;
		if (nbc > 4)
			return (0);
		i++;
	}
	return (1);
}
