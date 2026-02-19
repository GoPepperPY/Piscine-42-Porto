/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 13:29:31 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 15:19:39 by gopiment         ###   ########.fr       */
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

t_list	*ft_list_push_strs(int size, char **strs)
{
	int	counter;
    t_list *head = NULL;
    t_list *tail = NULL;

	head = NULL;
	counter = -1;
	while(++counter < size)
	{
		t_list *node = ft_create_elem((void *)strs[counter]);
        if (!head)
            head = node;
        else
            tail->next = node;
        tail = node;
	}
	return (head);
}

void	print_list(t_list *list)
{
	t_list *current = list;

	while (current != NULL)
	{
		printf("Value: %s\n", (char *)current->data);
		current = current->next;
	}
}

int main(int argc, char **argv)
{
	t_list	*linked_list = (t_list *)malloc(sizeof(t_list));
	linked_list = ft_list_push_strs(argc,argv);

	printf("\nLinked list:\n");
	print_list(linked_list);

	free(linked_list);
}