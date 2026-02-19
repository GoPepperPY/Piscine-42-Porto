/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 19:57:07 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/14 21:48:03 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	check(char **utils)
{
	int	counter;

	counter = 0;
	while(utils[counter])
	counter++;
	if(counter != 1 && !(utils[1][0] == '+' || utils[1][0] == '-' ||\
		utils[1][0] == '/' || utils[1][0] == '%' || utils[1][0] == '*'))
		return (0);
	counter = -1;
	while(utils[0][++counter])
	{
		if(!(utils[0][counter] >= '0' && utils[0][counter] <= '9'))
			return (0);
	}
	counter = -1;
	while(utils[2][++counter])
	{
		if(!(utils[2][counter] >= '0' && utils[2][counter] <= '9'))
			return (0);
	}
	return (1);
}

int	ft_atoi(const char *str)
{
	int	number;
	int	counter;
	int	positive;

	counter = 0;
	positive = 1;
	number = 0;
	while (str[counter] == ' ' || (str[counter] >= 9 && str[counter] <= 13))
		counter++;
	if (str[counter] == '-' || str[counter] == '+')
	{
		if (str[counter] == '-')
			positive *= -1;
		counter++;
	}
	while (str[counter] >= '0' && str[counter] <= '9')
	{
		number = (number * 10) + (str[counter] - '0');
		counter++;
	}
	return (number * positive);
}

void	ft_putstr(char word)
{
	write(1, &word, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else if (nb < 0)
	{
		nb = -nb;
		ft_putstr('-');
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putstr(nb + '0');
}

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		argv++;
		if(!check(argv))
			return (0);
		if (argv[1][0] == '-')
			ft_putnbr(ft_atoi(argv[0]) - ft_atoi(argv[2]));
		if (argv[1][0] == '+')
			ft_putnbr(ft_atoi(argv[0]) + ft_atoi(argv[2]));
		if (argv[1][0] == '/')
			ft_putnbr(ft_atoi(argv[0]) / ft_atoi(argv[2]));
		if (argv[1][0] == '*')
			ft_putnbr(ft_atoi(argv[0]) * ft_atoi(argv[2]));
		if (argv[1][0] == '%')
			ft_putnbr(ft_atoi(argv[0]) % ft_atoi(argv[2]));
		write(1, "\n", 1);
	}
}