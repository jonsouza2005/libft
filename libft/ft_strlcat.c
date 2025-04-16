/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-de < jlima-de@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:48:10 by jlima-de          #+#    #+#             */
/*   Updated: 2025/04/16 17:42:35 by jlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t len;

	len = ft_strlen(dest);
	i = 0;
	if (size != 0)
	{
		while(i < size && src[i])
		{
			dest[len] = src[i];
			i++;
			len++;
		}
		dest[len] = '\0';
		return (ft_strlen(dest) + ft_strlen(src));
	}
	return (str_len(src));
}