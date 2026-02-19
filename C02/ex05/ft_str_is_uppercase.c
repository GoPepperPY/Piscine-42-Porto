/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 17:41:19 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 17:42:23 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>
// #include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!((str[counter] >= 'A' && str[counter] <= 'Z')))
			return (0);
		counter++;
	}
	return (1);
}

// int main(void)
// {
// 	char	*str1 = "ABCD";
// 	char	*str2 = "ABcD";
// 	printf("%d\n", ft_str_is_uppercase(str1));	
// 	printf("%d\n", ft_str_is_uppercase(str2));
// }