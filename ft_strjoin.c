#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char *cat;
	size_t size;

	size = ft_strlen(s1) + ft_strlen(s2);
	if (s1 == NULL || s2 == NULL)
		return (NULL);
	cat = (char *)malloc(size + 1);
		if (!cat)
			return (NULL);
	ft_strlcpy(str, s1, size + 1);
	ft_strlcat(str, s2, size + 1);
	return (cat);
}