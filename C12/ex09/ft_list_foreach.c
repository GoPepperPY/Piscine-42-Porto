/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 17:19:26 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 17:28:20 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	print(void	*data)
{
	printf("%d", *(int *)data);
}

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*current;

	current = begin_list;
	while(current)
	{
		(*f)(current->data);
		current = current->next;
	}
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

// 	void *p1 = &a;
// 	void *p2 = &b;
// 	void *p3 = &c;

// 	linked_list = ft_create_elem(p1);
// 	linked_list->next = ft_create_elem(p2);
// 	linked_list->next->next = ft_create_elem(p3);

// 	ft_list_foreach(linked_list, &print);

// 	free(linked_list);
// }