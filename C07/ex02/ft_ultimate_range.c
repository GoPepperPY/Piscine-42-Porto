/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:55:54 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/16 18:45:05 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*array;
	int	counter;

	if (!range)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *) malloc(sizeof(int) * (max - min));
	if (!array)
	{
		*range = NULL;
		return (-1);
	}
	counter = 0;
	while (min < max)
	{
		array[counter] = min;
		min++;
		counter++;
	}
	*range = array;
	return (counter);
}
