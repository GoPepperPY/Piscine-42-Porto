/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 23:25:59 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 13:30:33 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <stdio.h>

typedef  struct	s_list
{
	struct s_list	*next;
	void			*data;
}		t_list;

void ft_list_push_back(t_list **begin_list, void *data);
t_list	*ft_create_elem(void *data);

#endif