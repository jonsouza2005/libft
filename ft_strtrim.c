/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-de < jlima-de@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 12:43:41 by jlima-de          #+#    #+#             */
/*   Updated: 2025/04/21 15:26:43 by jlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t size;
	char	*str;

	i = 0;
	size = ft_strlen(s1);
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (ft_strrchr(set, s1[size - 1]))
		size--;	
	str = ft_substr(s1, i, size - i);
	return (str);
}