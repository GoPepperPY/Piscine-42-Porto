/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:25:39 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/17 12:36:59 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	counter;

	counter = 0;
	if (nb <= 0)
		return (0);
	while (counter * counter < nb)
		counter++;
	if (counter * counter == nb)
		return (counter);
	else
		return (0);
}
