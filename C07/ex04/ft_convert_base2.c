/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/09 20:56:06 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/16 18:31:14 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	verify(char	*base);

int	ft_lenght(long number, int base)
{
	int	counter;

	counter = 0;
	if (number < 0)
	{
		number = -number;
		counter++;
	}
	if (number == 0)
		return (1);
	while (number > 0)
	{
		number /= base;
		counter++;
	}
	return (counter);
}

char	*pt2(long tmp, char *tmp_str, char *base)
{
	int	size;
	int	counter;

	size = ft_strlen(base);
	counter = ft_lenght(tmp, size);
	if (tmp < 0)
	{
		tmp = -tmp;
		tmp_str[0] = '-';
	}
	tmp_str[counter] = '\0';
	counter--;
	while (tmp > 0)
	{
		tmp_str[counter] = base[tmp % size];
		tmp = tmp / size;
		counter--;
	}
	return (tmp_str);
}

char	*ft_putnbr_base(int nbr, char *base)
{
	long	tmp;
	char	*tmp_str;

	if (!verify(base))
		return (0);
	tmp_str = (char *) malloc(sizeof (char) *\
(ft_lenght (nbr, ft_strlen(base)) + 1));
	if (tmp_str == NULL)
		return (0);
	if (nbr == 0)
	{
		tmp_str[0] = '0';
		tmp_str[1] = '\0';
		return (tmp_str);
	}
	tmp = nbr;
	tmp_str = pt2(tmp, tmp_str, base);
	return (tmp_str);
}
