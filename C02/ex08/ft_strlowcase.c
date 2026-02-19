/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:50:51 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 17:46:42 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (str[counter] >= 'A' && str[counter] <= 'Z')
			str[counter] = str[counter] + 32;
		counter++;
	}
	return (str);
}

// int main(void)
// {
// 	char	str[] = "OLAOLAOLA";
// 	printf("%s\n", ft_strlowcase(str));
// }