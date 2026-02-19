/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 18:19:18 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 18:52:25 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_strcmp(int s1, int s2)
{
	return (s1 - s2);
}

void none(void *begin_list)
{
	(void) begin_list;
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*current;
	t_list	*buff;
	t_list	*prev;

	current = *begin_list;
	prev = NULL;
	while(current)
	{
		buff = current->next;
		if ((*cmp)((int *)data_ref, *(int *)current->data) == 0)
		{
			if (prev)
					prev->next = buff;
			else
				*begin_list = buff;
			prev->next = buff;
			(*free_fct)(current->data);
			free(current);
		}
		else
			prev = current;
		current = buff;
	}
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

	int a = 1;
	int b = 2;
	int c = 3;

	void *p1 = &a;
	void *p2 = &b;
	void *p3 = &c;

	linked_list = ft_create_elem(p1);
	linked_list->next = ft_create_elem(p2);
	linked_list->next->next = ft_create_elem(p3);

	ft_list_remove_if(&linked_list, (void *) 2, &ft_strcmp, &none);
	print(linked_list);
	free(linked_list);
}