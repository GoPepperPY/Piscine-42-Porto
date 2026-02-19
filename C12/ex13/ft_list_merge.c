/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 18:55:07 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 19:16:43 by gopiment         ###   ########.fr       */
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

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*current;

	current = *begin_list1;

	while(current->next)
		current = current->next;
	current->next = begin_list2;
}


void	print(t_list *begin)
{
	while(begin)
	{
		printf("%d\n", *(int *)begin->data);
		begin = begin->next;
	}
}

int main(void)
{
	t_list	*linked_list = (t_list *)malloc(sizeof(t_list));
	t_list	*current = (t_list *)malloc(sizeof(t_list));

	int a = 1;
	int b = 2;
	int c = 3;

	void *p1 = &a;
	void *p2 = &b;
	void *p3 = &c;

	linked_list = ft_create_elem(p1);
	linked_list->next = ft_create_elem(p2);
	current = ft_create_elem(p3);

	ft_list_merge(&linked_list, current);
	print(linked_list);
	free(linked_list);
}