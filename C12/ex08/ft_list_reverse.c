/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:47:11 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 16:55:21 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*prev;
	t_list	*current;
	t_list	*next;

	current = (*begin_list);
	prev = NULL;
	next = NULL;
	while(current)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*begin_list = prev;
}

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

void	print_list(t_list *current)
{
	while(current)
	{
		printf("Value: %d\n", *(int *)current->data);
		current = current->next;
	}
}

int	main(int argc, char **argv)
{
	t_list	*linked_list = (t_list *)malloc(sizeof(t_list));

	int a = 1;
	int b = 2;
	int c = 3;

	void *p1 = &a;
	void *p2 = &b;
	void *p3 = &c;

	linked_list = ft_create_elem(p1);
	linked_list->next = ft_create_elem(p2);
	linked_list->next->next = ft_create_elem(p3);

	ft_list_reverse(&linked_list);
	print_list(linked_list);

	free(linked_list);
}