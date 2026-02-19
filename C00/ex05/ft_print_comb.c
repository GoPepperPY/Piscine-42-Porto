/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 14:07:04 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/29 20:07:34 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_print_comb(void)
{
	int	counter1;
	int	counter2;
	int	counter3;

	counter1 = '0';
	while (counter1 <= '7')
	{
		counter2 = counter1 + 1;
		while (counter2 <= '8')
		{
			counter3 = counter2 + 1;
			while (counter3 <= '9')
			{
				write(1, &counter1, 1);
				write(1, &counter2, 1);
				write(1, &counter3, 1);
				if (counter1 < '7')
					write(1, ", ", 2);
				counter3++;
			}
			counter2++;
		}
		counter1++;
	}
}

// int	main(void)
// {
// 	ft_print_comb();
// 	return (0);
// }
