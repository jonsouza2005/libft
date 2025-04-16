/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-de < jlima-de@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 18:15:24 by jlima-de          #+#    #+#             */
/*   Updated: 2025/04/16 17:39:30 by jlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
    int i;
    int sign;
    int n;
	
	i = 0;
    n = 0;
    sign = 1;
    while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
        i++;
    if (str[i] == '-')
	{
        sign = -sign;
        i++;
	}
	else if (str[i] == '+')
		i++;
    while (str[i] >= '0' && str[i] <= '9')
    {
        n = n * 10 + (str[i] - '0');
        i++;
    }
    return (n * sign);
}