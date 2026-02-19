/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:58:54 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 17:44:12 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!((str[counter] >= 32 && str[counter] <= 126)))
			return (0);
		counter++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*str1 = "+";
// 	char	*str2 = "±";
// 	printf("%d\n", ft_str_is_printable(str1));	
// 	printf("%d\n", ft_str_is_printable(str2));
// }