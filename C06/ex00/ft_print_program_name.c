/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 11:05:43 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/08 13:50:34 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	counter;

	(void) argc;
	counter = -1;
	while (argv[0][++counter])
		write (1, &argv[0][counter], 1);
	write (1, "\n", 1);
	return (0);
}
