/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 11:17:10 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/10 15:06:51 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	swap_signal(char *string1, char *string2)
{
	int	counter;

	counter = 0;
	while (string1[counter] == string2[counter] && string1[counter])
		counter++;
	return (string1[counter] - string2[counter]);
}

void	print(char *string)
{
	int	counter;

	counter = -1;
	while (string[++counter])
		write (1, &string[counter], 1);
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int		counter;
	int		counter1;
	char	*temp;

	counter = 1;
	while (counter < argc)
	{
		counter1 = 1;
		while (counter1 < argc)
		{
			if (swap_signal(argv[counter], argv[counter1]) < 0)
			{
				temp = argv[counter];
				argv[counter] = argv[counter1];
				argv[counter1] = temp;
			}
			counter1++;
		}
		counter++;
	}
	counter = 0;
	while (argv[++counter])
		print (argv[counter]);
}
