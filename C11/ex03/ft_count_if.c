/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:42:28 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/14 19:46:57 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

// int	ft_strlen(char *str)
// {
// 	int	counter;

// 	counter = 0;
// 	while(str[counter])
// 		counter++;
// 	return (counter);
// }

int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int	counter;
	int	count;

	counter = -1;
	while(++counter < length)
	{
		if((*f)(tab[counter]))
			count++;
	}
	return (0);
}
// int	main(int argc, char **argv)
// {
// 	(void) argc;
// 	argv++;
// 	printf("%d", ft_any(argv, &ft_strlen));
// }