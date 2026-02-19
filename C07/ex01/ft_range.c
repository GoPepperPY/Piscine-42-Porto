/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:39:57 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/14 22:56:07 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	counter;

	counter = 0;
	array = (int *) malloc(sizeof(int) * ((max - min) + 1));
	if (min >= max)
		return (0);
	while (min < max)
	{
		array[counter] = min;
		counter++;
		min++;
	}
	return (array);
}
