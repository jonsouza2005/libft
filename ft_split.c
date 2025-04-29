/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-de < jlima-de@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:46:57 by jlima-de          #+#    #+#             */
/*   Updated: 2025/04/29 15:46:57 by jlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	check;

	check = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && check == 0)
		{
			count++;
			check = 1;
		}
		else if (*s == c)
			check = 0;
		s++;
	}
	return (count);
}

static char	*new_word(char const *s, char c)
{
	char	*str;
	size_t	len;

	len = 0;
	while (s[len] != c && s[len])
	{
		len++;
	}
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, len + 1);
	return (str);
}

static void	ft_free(char **str)
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

static char	**new_split(char **str, char const *s, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (s[j])
	{
		if (s[j] != c)
		{
			str[i] = new_word(&s[j], c);
			if (!str)
			{
				ft_free(str);
				return (NULL);
			}
			i++;
			while (s[j] != c && s[j])
				j++;
		}
		else
			j++;
	}
	str[i] = NULL;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	if (!s)
		return (NULL);
	str = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return (new_split(str, s, c));
}
