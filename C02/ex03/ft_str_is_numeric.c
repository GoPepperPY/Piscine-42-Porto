/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:48:29 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 17:38:30 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!((str[counter] >= '0' && str[counter] <= '9')))
			return (0);
		counter++;
	}
	return (1);
}

// int main(void)
// {
// 	char	*str1 = "012356789";
// 	char	*str2 = "A12356789";
// 	printf("%d\n", ft_str_is_numeric(str1));	
// 	printf("%d\n", ft_str_is_numeric(str2));
// 	return 0;
// }