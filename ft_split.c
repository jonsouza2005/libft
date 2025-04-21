#include "libft.h"
#include <stdio.h>

static size_t count_words(char const *s, char c)
{
	size_t	count;
	size_t	control;

	control = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && control == 0)
		{
			count++;
			control == 1;
		}
		else if (*s == c)
			control == 0;
		s++;
	}
	return (count);
}

static	char *new_word(char const *s, char c)
{
	char *str;
	size_t	len;

	len = 0;
	while (*s != c)
	{
		len++;
		s++;
	}
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len + 1);
	return (str);
}

static void ft_free(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}
static	void **new_split(char **str, char const *s, char c)
{
	size_t i;

	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			str[i] = new_word(s, c);
			if (!str)
			{
				ft_free(str);
				return (NULL);
			}
			i++;
			while (*s != c)
				s++;
		}
		else
			s++;
	}
	str[i] = '\0';
}

char **ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc(count_words(s, c) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	new_split(str, s, c);
	return (str);
}
int	main()
{
	char	*str = "john,seila,pedro"; 
	char	**result;

	result = ft_split(str, ',');
	printf("%s\n", result);
}