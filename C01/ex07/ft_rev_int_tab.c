/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:01:18 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 13:55:12 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	temporary;

	counter = -1;
	size--;
	while (++counter < size)
	{
		temporary = tab[counter];
		tab[counter] = tab[size];
		tab[size] = temporary;
		size--;
	}
}

// int main(void)
// {
// 	int	tab[7] = {1, 2, 5, 6, 98, 21, 35}, counter = -1;
// 	ft_rev_int_tab(tab, 3);

// 	while(tab[++counter])
// 		printf("%d ", tab[counter]);
// 	return 0;
// }