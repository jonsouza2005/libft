#include "libft.h"

static size_t count_words(char const *s, char c)
(
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
)

static	char *new_word(char const *s, char c)
{
	char *str
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

char **ft_split(char const *s, char c)
{
	char	**str;
	size_t i;

	i = 0;
	if (!s)
		return (NULL);
	str = malloc(count_words(s, c) * sizeof(char) + 1);
	if (!str)
		return (NULL);
	while (*s)
	{
		if (*s != c)
		{
			str[i] = new_word(s, c)
			if (!str)
			{
				ft_free(str);
				return (NULL);
			}
			i++;
			while (*s != c)
				s++;
		}
	s++;
	}
	str[i] = '\0';
	return (str[i]);
}

	john,seila,pedro

*str[0] = {"john"}
*str[1] = {"seila"}