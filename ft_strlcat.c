/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-de < jlima-de@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:48:10 by jlima-de          #+#    #+#             */
/*   Updated: 2025/04/16 22:34:14 by jlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t len_src;
	size_t len_dst;

	len_src = ft_strlen(src);
	len_dst = ft_strlen(dest);
	i = 0;
	j = len_dst;
	if(len_dst >= size)
		return (len_src + size);
	while(i + j < size - 1 && src[i])
	{
		dest[j + i] = src[i];
		i++;
	}
	dest[j + i] = '\0';
	return (len_dst + len_src);
}