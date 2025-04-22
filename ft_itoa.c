/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-de < jlima-de@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 17:42:17 by jlima-de          #+#    #+#             */
/*   Updated: 2025/04/22 22:10:02 by jlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int len_nbr(long n)
{
	int count;

	count = 0;
	if (n < 0)
		count++;
	if (n == 0)
		count++;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*itoa_nbr(char *str, int n)
{
	int		i;
	long	nbr;

	nbr = n;
	i = len_nbr(n);
	str[i] = '\0';
	if (nbr < 0)
	{
		nbr = -nbr;
		str[0] = '-';
	}
	if (nbr == 0)
	{
		str[i] = '0';
	}
	while (nbr > 0)
	{
		i--;
		str[i] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (str);
}

char *ft_itoa(int n)
{
	char *str;

	str = malloc((len_nbr(n) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	return (itoa_nbr(str, n));
}

int	main()
{
	printf("%s\n", ft_itoa(42));
}