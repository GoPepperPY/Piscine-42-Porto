/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 13:58:03 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/29 20:04:24 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	if (n >= 0)
		write(1, "P", 1);
}

// #include <stdio.h>

// int main(void)
// {
// 	ft_is_negative(-35);
// 	return 0;
// }