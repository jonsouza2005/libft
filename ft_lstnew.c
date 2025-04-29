/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima-de < jlima-de@student.42lisboa.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:10:31 by jlima-de          #+#    #+#             */
/*   Updated: 2025/04/29 17:17:37 by jlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*newcont;

	newcont = malloc(sizeof(t_list));
	if (!newcont)
		return (NULL);
	newcont->content = content;
	newcont->next = NULL;
	return (newcont);
}
