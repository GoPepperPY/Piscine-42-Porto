/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 11:06:09 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/04 19:03:24 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

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
	while (str[counter] == '-' || str[counter] == '+')
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

// int	main(void)
// {
// 	printf("%d", ft_atoi(" ---+--+1234ab567"));
// }