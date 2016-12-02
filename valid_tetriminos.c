#include "fillit.h"

/*
** function valid_tetriminos retuurnr 1 si le fichier est ok et 0 si il ne
** l'est pas.
** ft_valid_one verifie si le fichier contient des caractères qui ne devraient
** pas être présents. cette fonction vérifie aussi si le caractère final est
** un \n ou non, et verifie enfin si la proportionnalité des '.' et des '#'
** est bonne.
*/

int		ft_valid_two(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		
		i++;
	}
	return (1);
}

int		ft_valid_one(char *str)
{
	int		i;
	int		nbd;
	int		nbp;

	i = 0;
	nbd = 0;
	nbp = 0;
	while (str[++i])
	{
		if (str[i] != '\n' && str[i] != '.' && str[i] != '#')
			return (0);
		if (str[i] == '.')
			nbp++;
		if (str[i] == '#')
			nbd++;
		i++;
	}
	if (nbp / nbd != 2)
		return (0);
	if (str[i - 1] == '\n')
		return (0);
	return (ft_valid_two(str));
}

int			valid_tetriminos(const int fd)
{
	char	buf[601];
	char	*str;

	read(fd, buf, 600);
	if (ft_strlen(buf) > 547)
		return (0);
	str = ft_strdup(buf);
	return (ft_valid_one(str));
}
