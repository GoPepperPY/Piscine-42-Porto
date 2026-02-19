/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 22:18:11 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 18:01:54 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_converthex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] < ' ' || str[counter] == 127)
		{
			ft_putchar('\\');
			ft_converthex(str[counter]);
		}
		else
			ft_putchar(str[counter]);
		counter++;
	}
}

// int	main(void)
// {
// 	char *str = "Ola\nesta bem?";
// 	ft_putstr_non_printable(str);
// }