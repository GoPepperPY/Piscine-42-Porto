/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 23:25:59 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 14:46:31 by gopiment         ###   ########.fr       */
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

t_list	*ft_create_elem(void *data);
t_list	*ft_list_push_strs(int size, char **strs);

#endif