/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:54:48 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 11:45:10 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);

	elem->data = data;
	elem->next = NULL;

	return (elem);
}

// int main(void)
// {
// 	int		a = 42;

// 	t_list	*list;

// 	list = ft_create_elem(&a);

// 	printf("Value of elem->data: %d\n", *(int *)list->data);
// 	printf("Value of elem->next: %p\n", (void *)list->next);

// 	free(list);
// }