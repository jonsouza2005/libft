/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-de < jlima-de@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 15:23:13 by jlima-de          #+#    #+#             */
/*   Updated: 2025/04/15 17:07:16 by jlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
	size_t i;
	void *str;

	i = 0;
	if (size != 0 && nmemb > (size_t) - 1 / size)
		return (NULL);
	str = (void *)malloc(nmemb * size + 1);
	if (str == NULL)
		return (NULL);
	ft_memset(str, 0, nmemb * size);
	return (str);
}