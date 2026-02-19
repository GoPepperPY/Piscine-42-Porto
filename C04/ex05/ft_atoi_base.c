/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 19:34:04 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/04 19:04:22 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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

int	give_base(char c, char *base)
{
	int	counter;

	counter = 0;
	while (base[counter])
	{
		if (c == base[counter])
			return (counter);
		counter++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		ctr;
	int		size;
	int		number;
	char	positive;

	ctr = 0;
	positive = 1;
	if (!verify(base))
		return (0);
	while (str[ctr] == ' ' || (str[ctr] >= 9 && str[ctr] <= 13))
		ctr++;
	while (str[ctr] == '-' || str[ctr] == '+')
	{
		if (str[ctr] == '-')
			positive *= -1;
		ctr++;
	}
	number = 0;
	size = ft_strlen(base);
	while (give_base(str[ctr], base) != -1)
	{
		number = (number * size) + give_base(str[ctr], base);
		ctr++;
	}
	return (number * positive);
}

// int	main(void)
// {
// 	// printf("%d\n", ft_atoi_base("	+++++--10", "0123456789"));
// 	// printf("%d\n", ft_atoi_base(" --101010", "01"));
// 	printf("%d\n", ft_atoi_base("ff", "0123456789abcdef"));
// }

// 10
// 42
// -1337