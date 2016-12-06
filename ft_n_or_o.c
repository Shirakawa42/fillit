#include "fillit.h"

int		ft_n_or_o(char *str)
{
	int		i;
	int		nbn;

	i = 0;
	nbn = 0;
	while (str[i])
	{
		if (str[i] != '\n' && nbn == 4)
			return (0);
		else if (str[i] == '\n')
			nbn++;
		else
			nbn = 0;
		i++;
	}
	if (str[i - 1] == '\n')
		return (0);
	return (1);
}
