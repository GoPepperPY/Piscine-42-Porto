/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 17:13:50 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/14 18:29:37 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <stdlib.h>

// int	ft_find_next_prime(int nb)
// {
// 	int	counter;

// 	if (nb <= 1)
// 		return (2);
// 	counter = 2;
// 	while (counter <= nb / counter)
// 	{
// 		if (nb % counter == 0)
// 			return (ft_find_next_prime(nb + 1));
// 		counter++;
// 	}
// 	return (nb);
// }

int *ft_map(int *tab, int length, int(*f)(int))
{
	int	*final;
	int	counter;

	final = (int *)malloc(sizeof(int) * (length + 1));
	if(final == NULL)
		return (NULL);
	counter = -1;
	while(++counter < length)
		final[counter] = (*f)(tab[counter]);
	return (final);
}

// int main(void)
// {
// 	int	tab[] = {1, 2, 3, 4, 5, 6}, *final, counter = -1;
// 	final = ft_map(tab, 6, &ft_find_next_prime);
// 	while (final[++counter])
// 		printf("%d\n", final[counter]);
// }