#include "fillit.h"

int			ft_number_of_pieces(char *str)
{
	int		i;
	int		nbn;
	int		tmp;

	i = 0;
	nbn = 0;
	tmp = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			nbn++;
			tmp++;
		}
		if (tmp == 5)
		{
			tmp = 0;
			nbn--;
		}
		i++;
	}
	if (nbn % 4 != 0)
		return (-1);
	return (nbn / 4);
}
