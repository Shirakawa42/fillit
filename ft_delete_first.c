char	*ft_delete_first(char *str)
{
	int		nbn;
	int		i;
	char	*tmp;

	if (ft_strlen(str) < 21)
		return (NULL);
	tmp = ft_strdup(&str[20])
	free(str);
	return (tmp);
}
