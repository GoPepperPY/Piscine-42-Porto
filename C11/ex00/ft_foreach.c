/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 16:59:15 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/14 18:48:21 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// void	ft_putchar(char word)
// {
// 	write(1, &word, 1);
// }

// void	ft_putnbr(int nb)
// {
// 	if (nb == -2147483648)
// 		write(1, "-2147483648", 11);
// 	else if (nb < 0)
// 	{
// 		nb = -nb;
// 		ft_putchar('-');
// 		ft_putnbr(nb);
// 	}
// 	else if (nb > 9)
// 	{
// 		ft_putnbr(nb / 10);
// 		ft_putnbr(nb % 10);
// 	}
// 	else
// 		ft_putchar(nb + '0');
// }

void	ft_foreach(int *tab, int length, void(*f)(int))
{
	int	counter;

	counter = -1;
	while(++counter < length)
		(*f)(tab[counter]);
}

// int main(void)
// {
// 	int	tab[] = {1, 2, 3, 4, 5, 6, 7, 7};
// 	ft_foreach(tab, 8, &ft_putnbr);
// }