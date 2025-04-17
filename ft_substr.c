/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-de < jlima-de@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 17:04:39 by jlima-de          #+#    #+#             */
/*   Updated: 2025/04/16 23:22:25 by jlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	size_t j;
	char *sub;

	i = 0;
	j = start;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return ("");
	if (len > ft_strlen(s))
		len = ft_strlen((s + start));
	sub = (char *)malloc(ft_strlen(s) + 1);
		if (sub == NULL)
			return (NULL);
	while (i < len)
	{
		sub[i] = s[j];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}