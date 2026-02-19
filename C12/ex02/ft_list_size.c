/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 11:41:21 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 11:47:13 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
	t_list *current = begin_list;
	int		counter;

	counter = 0;
	while (current != NULL)
	{
		counter++;
		current = current->next;
	}
	return (counter);
}

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*elem;

// 	elem = (t_list *)malloc(sizeof(t_list));
// 	if (!elem)
// 		return (NULL);

// 	elem->data = data;
// 	elem->next = NULL;

// 	return (elem);
// }

// int main(void)
// {
// 	t_list	*linked_list = (t_list *)malloc(sizeof(t_list));

// 	int a = 1;
// 	int b = 2;
// 	int c = 3;
// 	int d = 0;

// 	void *p1 = &a;
// 	void *p2 = &b;
// 	void *p3 = &c;
// 	void *p4 = &d;

// 	linked_list = ft_create_elem(p1);
// 	linked_list->next = ft_create_elem(p2);
// 	linked_list->next->next = ft_create_elem(p3);

// 	printf("%d\n", ft_list_size(linked_list));

// 	free(linked_list);
// }