/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:25:51 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 13:50:22 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

// int	main(void)
// {
// 	int counter = 1;
// 	int counter1 = 0;
// 	int	*a = &counter;
// 	int *b = &counter1;

// 	ft_swap(a, b);
// 	printf("%d %d", counter, counter1);
// 	return 0;
// }