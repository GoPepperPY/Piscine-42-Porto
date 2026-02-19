/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:51:14 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/16 18:31:02 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*ft_putnbr_base(int nbr, char *base);

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
	if (!base || ft_strlen(base) < 2)
		return (0);
	while (base[++counter1])
	{
		counter2 = -1;
		while (base[++counter2])
		{
			if ((base[counter2] == base[counter1]) && (counter1 != counter2))
				return (0);
		}
	}
	counter1 = -1;
	while (base[++counter1])
	{
		if (base[counter1] == '-' || base[counter1] == '+' || \
base[counter1] == ' ' || (base[counter1] >= 9 && base[counter1] <= 13))
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

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	buffer;

	if (!verify(base_from) || !verify(base_to))
		return (NULL);
	buffer = ft_atoi_base(nbr, base_from);
	nbr = ft_putnbr_base(buffer, base_to);
	return (nbr);
}

// int	main(void)
// {
// 	printf("%s", ft_convert_base("-42", "0123456789", "01"));
// }