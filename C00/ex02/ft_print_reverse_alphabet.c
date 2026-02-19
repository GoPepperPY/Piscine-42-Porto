/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 12:09:11 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/29 20:03:17 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	counter;

	counter = 'z';
	while (counter >= 'a')
	{
		write(1, &counter, 1);
		counter--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// 	return 0;
// }