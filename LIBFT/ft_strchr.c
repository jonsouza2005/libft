char	ft_strchr(const char *s, int c)
{
	char	to_find;
	int	i;

	i = 0;
	
	while (s[i] != '\0' && s[i] != to_find)
		i++;
	return (s[i])
}