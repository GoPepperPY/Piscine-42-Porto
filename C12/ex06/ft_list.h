/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 23:25:59 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/15 15:36:33 by gopiment         ###   ########.fr       */
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

void ft_list_clear(t_list *begin_list, void (*free_fct)(void *));

#endif