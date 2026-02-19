/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/15 15:21:37 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 15:29:53 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->data);
	free(lst);
}

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*temporary;

	if (!begin_list || !free_fct)
		return ;
	while (begin_list)
	{
		temporary = (begin_list)->next;
		ft_lstdelone(begin_list, free_fct);
		begin_list = temporary;
	}
	begin_list = NULL;
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

void	print_list(void *data)
{
	printf("Value: %s\n", (char *)data);
}

int	main(int argc, char **argv)
{
	t_list	*linked_list = (t_list *)malloc(sizeof(t_list));
	linked_list = ft_list_push_strs(argc,argv);

	ft_list_clear(linked_list, &print_list);
}