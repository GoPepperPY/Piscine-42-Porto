/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:43:38 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 17:45:26 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 'a' && str[counter] <= 'z')
			str[counter] = str[counter] - 32;
		counter++;
	}
	return (str);
}

// int main(void)
// {
// 	char	str[] = "olaolaola";
// 	printf("%s\n", ft_strupcase(str));
// }