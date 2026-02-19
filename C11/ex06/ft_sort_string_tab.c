/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:23:13 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/14 22:31:50 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	swap_signal(char *string1, char *string2)
{
	int	counter;

	counter = 0;
	while (string1[counter] == string2[counter] && string1[counter])
		counter++;
	return (string1[counter] - string2[counter]);
}

void	ft_sort_string_tab(char **tab)
{
	int		counter;
	int		counter1;
	char	*temp;

	counter = -1;
	while (tab[++counter])
	{
		counter1 = -1;
		while (tab[++counter1])
		{
			if (swap_signal(tab[counter], tab[counter1]) < 0)
			{
				temp = tab[counter];
				tab[counter] = tab[counter1];
				tab[counter1] = temp;
			}
		}
	}
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	(void) argc;
// 	argv++;
// 	ft_sort_string_tab(argv);
// 	int	counter = -1;
// 	while(argv[++counter])
// 		printf("%s\n", argv[counter]);
// }