/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 15:07:39 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/29 20:10:22 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	counter1;
	int	counter2;

	counter1 = -1;
	while (++counter1 <= 98)
	{
		counter2 = counter1;
		while (++counter2 <= 99)
		{
			ft_putchar((char)(counter1 / 10) + '0');
			ft_putchar((char)(counter1 % 10) + '0');
			ft_putchar(' ');
			ft_putchar((char)(counter2 / 10) + '0');
			ft_putchar((char)(counter2 % 10) + '0');
			if (counter1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}

// int	main(void)
// {
// 	ft_print_comb2();
// 	return (0);
// }
