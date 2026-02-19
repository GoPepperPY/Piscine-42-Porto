/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 22:32:22 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/14 22:38:50 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	swap_signal(char *string1, char *string2)
{
	int	counter;

	counter = 0;
	while (string1[counter] == string2[counter] && string1[counter])
		counter++;
	return (string1[counter] - string2[counter]);
}

void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
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
			if ((*cmp)(tab[counter], tab[counter1]) < 0)
			{
				temp = tab[counter];
				tab[counter] = tab[counter1];
				tab[counter1] = temp;
			}
		}
	}
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	(void) argc;
	argv++;
	ft_sort_string_tab(argv, &swap_signal);
	int	counter = -1;
	while(argv[++counter])
		printf("%s\n", argv[counter]);
}