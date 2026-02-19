/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:43:52 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 13:55:40 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	counter;
	int	*x;
	int	*y;

	while (size >= 0)
	{
		counter = 0;
		while (counter < (size - 1))
		{
			if (tab[counter] > tab[counter + 1])
			{
				x = &tab[counter];
				y = &tab[counter + 1];
				ft_swap(x, y);
			}
			counter++;
		}
		size--;
	}
}

// int main(void)
// {
// 	int	array[] = {3, 1, 0, 5, 4}, counter = -1;
// 	ft_sort_int_tab(array, 5);
// 	while(++counter < 5)
// 		printf("%d ", array[counter]);
// 	return 0;
// }