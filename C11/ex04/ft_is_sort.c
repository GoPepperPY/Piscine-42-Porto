/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 19:47:39 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/14 19:55:44 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int	aux(int n, int n2)
// {
// 	return(n - n2);
// }

int	ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	int	counter;

	counter = -1;
	while(++counter < length)
	{
		if((*f)(tab[counter], tab[counter+1]) > 0)
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	tab[] = {1, 2, 3, 4, 6, 5};
// 	printf("%d", ft_is_sort(tab, 6, &aux));
// }