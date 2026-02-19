/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 12:03:14 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 13:28:26 by gopiment         ###   ########.fr       */
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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *node;

	node = *begin_list;
	if(*begin_list)
	{
		while (node->next != NULL)
			node = node->next;
		node->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}

// void	print_list(t_list *list)
// {
// 	t_list *current = list;

// 	while (current != NULL)
// 	{
// 		printf("Value: %d\n", *(int *)current->data);
// 		current = current->next;
// 	}
// }

// int main(void)
// {
// 	t_list	*linked_list = (t_list *)malloc(sizeof(t_list));

// 	int a = 1;
// 	int b = 2;
// 	int c = 3;
// 	int d = 4;

// 	void *p1 = &a;
// 	void *p2 = &b;
// 	void *p3 = &c;
// 	void *p4 = &d;

// 	linked_list = ft_create_elem(p1);
// 	linked_list->next = ft_create_elem(p2);
// 	linked_list->next->next = ft_create_elem(p3);

// 	printf("Linked list before:\n");
// 	print_list(linked_list);

// 	ft_list_push_back(&linked_list, p4);

// 	printf("\nLinked list after:\n");
// 	print_list(linked_list);

// 	free(linked_list);
// }