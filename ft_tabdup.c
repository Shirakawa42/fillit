char	**ft_tabdup(char **tab)
{
	char	**cpy;
	int		i;
	int		j;
	int		nbofstr;
	i = 0;
	while (tab[i])
		i++;
	cpy = (char**)malloc(sizeof(char*) * (nbofstr + 1));
	cpy[nbofstr + 1] = 0;
	i = 0;
	while (tab[i])
	{
		j = 0;
		cpy[i] = (char*)malloc(sizeof(char) * (ft_strlen(tab[i]) + 1));
		while (tab[i][j])
		{
			cpy[i][j] = tab[i][j];
			j++;
		}
		cpy[i][j] = '\0';
		i++;
	}
	return (cpy);
}
