/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-de < jlima-de@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:04:39 by jlima-de          #+#    #+#             */
/*   Updated: 2025/04/14 18:05:06 by jlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void 	*ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;
    unsigned char *d = (unsigned char *)dest;
    unsigned char *s = (unsigned char *)src;
	
	i = 0;
    if (d == s || n == 0)
        return (dest);
    if (d > s)
    {
        i = n - 1;
        while (i > 0)
        {
            d[i] = s[i];
            i--;
        }
        d[i] = s[i];
    }
    else
    {
        while (i < n)
        {
            d[i] = s[i];
            i++;
        }
    }
    return (d);
}