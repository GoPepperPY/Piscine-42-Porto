/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:43:35 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/29 19:30:03 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	ab;
	int	bb;

	ab = *a;
	bb = *b;
	*a = ab / bb;
	*b = ab % bb;
}

// int	main(void)
// {
// 	int counter = 78, counter1 = 10, *a = &counter, *b = &counter1;
// 	ft_ultimate_div_mod(a, b);

// 	printf("%d %d", counter, counter1);
// 	return 0;
// }