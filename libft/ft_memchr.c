/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-de < jlima-de@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:08:57 by jlima-de          #+#    #+#             */
/*   Updated: 2025/04/14 18:10:28 by jlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memchr(const void *str, int c, size_t n)
{
    size_t i;
    unsigned char *ptr;
	
	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
    {
        if (ptr[i] == (unsigned char)c)
            return ((void *)&ptr[i]);
        i++;
    }
    return (NULL);
}