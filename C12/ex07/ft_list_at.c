/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:36:48 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 15:46:16 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	counter;
	t_list			*current;

	counter = 0;
	current = begin_list;
	while(counter < nbr)
	{
		if(counter + 1 != nbr)
			current = current->next;
		counter++;
	}
	return (current);
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

	t_list *node = ft_list_at(linked_list, 2);
	printf("%d\n", *(int *)node->data);

	free(linked_list);
}