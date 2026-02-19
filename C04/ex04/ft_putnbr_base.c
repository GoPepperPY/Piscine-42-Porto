/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 15:11:09 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/09 21:44:37 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght])
		lenght++;
	return (lenght);
}

int	verify(char	*base)
{
	int	counter1;
	int	counter2;

	counter1 = -1;
	while (base[++counter1])
	{
		counter2 = -1;
		while (base[++counter2])
		{
			if ((base[counter2] == base[counter1]) && (counter1 != counter2))
				return (0);
		}
	}
	if (ft_strlen(base) <= 1)
		return (0);
	counter1 = -1;
	while (base[++counter1])
	{
		if (base[counter1] == '-' || base[counter1] == '+')
			return (0);
	}
	return (1);
}

void	pt2(long tmp, char *tmp_str, char *base)
{
	int	size;
	int	counter;

	counter = 0;
	size = ft_strlen(base);
	while (tmp > 0)
	{
		tmp_str[counter] = base[tmp % size];
		tmp = tmp / size;
		counter++;
	}
	while (--counter >= 0)
		ft_putchar(tmp_str[counter]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	tmp;
	char	tmp_str[32];

	if (nbr == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (!verify(base))
		return ;
	tmp = nbr;
	if (tmp < 0)
	{
		tmp = -tmp;
		ft_putchar('-');
	}
	pt2(tmp, tmp_str, base);
}

// #include <stdio.h>

// int main(void)
// {
// 	ft_putnbr_base(2147483647, "0123456789abcdef");
// }