int		ft_is_that_ok(char **tab)
{
	int		nbtouch;
	int		x;
	int		y;

	nbtouch = 0;
	y = -1;
	while (++y < 4)
	{
		x = -1;
		while (++x < 4)
			if (tab[x][y] == '#')
			{
				if (tab[x][y + 1] == '#')
					nbtouch++;
				if (tab[x][y - 1] == '#')
					nbtouch++;
				if (tab[x + 1][y] == '#')
					nbtouch++;
				if (tab[x - 1][y] == '#')
					nbtouch++;
			}
	}
	if (nbtouch != 6 && nbtouch != 8)
		return (0);
	return (1);
}

char	**ft_morphing_to_piece(char **tab)
{
	return (tab);
}

char	**ft_verif_then_morph(char *str)
{
	char	tab[4][4];
	int		x;
	int		y;
	int		i;

	y = 0;
	i = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
			tab[x++][y] = str[i++];
		y++;
		i++;
	}
	if (ft_is_that_ok(tab) == 0)
		return (NULL);
	return (ft_morphing_to_piece(tab));
}
