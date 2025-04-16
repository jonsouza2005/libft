/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-de < jlima-de@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 14:33:37 by jlima-de          #+#    #+#             */
/*   Updated: 2025/04/15 16:52:47 by jlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char *ft_strcpy(char *dest, char *src)
{
	int i;
	
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest = '\0';
	return (dest);
}

char *ft_strdup(const char *src)
{
	size_t len;
	char *dest;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(len + 1));
	if (dest == NULL)
		return (NULL);
	return ((char *)ft_strcpy(dest, src));

}