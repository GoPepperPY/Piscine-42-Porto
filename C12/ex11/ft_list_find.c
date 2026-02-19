/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 17:48:06 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 18:18:30 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_strcmp(int s1, int s2)
{
	return (s1 - s2);
}

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*current;
	int		counter;

	current = begin_list;
	while(current)
	{

		counter = (*cmp)((int *)data_ref, *(int *)current->data);
		if(counter == 0)
			return (current);
		current = current->next;
	}
	return (NULL);
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

int main(void)
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

	if(ft_list_find(linked_list, (void *)2, &ft_strcmp))
		printf("%d", *(int *)ft_list_find(linked_list, (void *)2, &ft_strcmp)->data);
	free(linked_list);
}