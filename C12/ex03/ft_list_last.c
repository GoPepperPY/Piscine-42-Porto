/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 11:48:08 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 12:01:31 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *current;
	current = begin_list;

	while (current->next != NULL)
		current = current->next;
	return (current);
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

// 	linked_list = ft_list_last(linked_list);
// 	printf("%d\n", *(int *)linked_list->data);

// 	free(linked_list);
// }