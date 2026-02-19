/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:51:34 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 17:39:34 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!((str[counter] >= 'a' && str[counter] <= 'z')))
			return (0);
		counter++;
	}
	return (1);
}

// int main(void)
// {
// 	char	*str1 = "abcd";
// 	char	*str2 = "abcD";
// 	printf("%d\n", ft_str_is_lowercase(str1));	
// 	printf("%d\n", ft_str_is_lowercase(str2));
// 	return 0;
// }