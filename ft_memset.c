/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-de < jlima-de@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:01:20 by jlima-de          #+#    #+#             */
/*   Updated: 2025/04/16 17:39:53 by jlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
    size_t i;
	
	i = 0;
    while (i < n)
    {
		((unsigned char *)s)[i] = (unsigned char)c;
        i++;
    }
    return (s);
}