/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:54:54 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/14 23:24:15 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <stdio.h>
# include <stdlib.h>

typedef  struct	s_list
{
	struct s_list	*next;
	void			*data;
}		t_list;

t_list	*ft_create_elem(void *data);

#endif