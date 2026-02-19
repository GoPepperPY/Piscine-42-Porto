/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 15:53:14 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 13:51:48 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	counter;

	counter = -1;
	while (str[++counter])
		write(1, &str[counter], 1);
}

// int main(void)
// {
// 	char	string[5] = "Ola!";
// 	ft_putstr(string);
// 	return (0);
// }