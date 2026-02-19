/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:37:04 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/17 12:37:45 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	counter;

	if (nb <= 1)
		return (2);
	counter = 2;
	while (counter <= nb / counter)
	{
		if (nb % counter == 0)
			return (ft_find_next_prime(nb + 1));
		counter++;
	}
	return (nb);
}
