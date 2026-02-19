/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 11:09:23 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/10 15:07:25 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char *string)
{
	int	counter;

	counter = -1;
	while (string[++counter])
		write(1, &string[counter], 1);
	write (1, "\n", 1);
}

int	main(int argc, char **argv)
{
	int	counter;

	counter = 0;
	(void) argc;
	while (argv[++counter])
		print(argv[counter]);
	return (0);
}
