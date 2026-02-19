/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 20:21:52 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/16 19:06:41 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRS_TO_TAB_H
# define FT_STRS_TO_TAB_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct t_stock_str
{
	int		size;
	char	*str;
	char	*copy;
}		s_stock_str;

#endif