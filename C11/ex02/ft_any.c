/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 18:30:17 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/14 18:42:08 by gopiment         ###   ########.fr       */
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

int	ft_any(char **tab, int(*f)(char*))
{
	int	counter;

	counter = -1;
	while(tab[++counter])
	{
		if((*f)(tab[counter]))
			return (1);
	}
	return (0);
}

// int	main(int argc, char **argv)
// {
// 	(void) argc;
// 	argv++;
// 	printf("%d", ft_any(argv, &ft_strlen));
// }