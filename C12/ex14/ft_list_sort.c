/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 19:19:16 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 19:35:16 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_strcmp(int s1, int s2)
{
	return (s1 - s2);
}

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*current;
	t_list	*tmp;
	int		counter;

	current = *begin_list;
	tmp = NULL;
	while(current)
	{
		
	}
}

void	print(t_list *begin)
{
	int	counter = -1;
	while(++counter < 3)
	{
		printf("%d\n", *(int *)begin->data);
		begin = begin->next;
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

int main(void)
{
	t_list	*linked_list = (t_list *)malloc(sizeof(t_list));

	int a = 3;
	int b = 2;
	int c = 1;

	void *p1 = &a;
	void *p2 = &b;
	void *p3 = &c;

	linked_list = ft_create_elem(p1);
	linked_list->next = ft_create_elem(p2);
	linked_list->next->next = ft_create_elem(p3);

	ft_list_sort(&linked_list, &ft_strcmp);
	print(linked_list);
	free(linked_list);
}