/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:42:15 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 17:37:56 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		if (!((str[counter] >= 'a' && str[counter] <= 'z')
				|| (str[counter] >= 'A' && str[counter] <= 'Z')))
			return (0);
		counter++;
	}
	return (1);
}

// int main(void)
// {
// 	char	*str1 = "Test";
// 	char	*str2 = "Test1";
// 	printf("%d\n", ft_str_is_alpha(str1));	
// 	printf("%d\n", ft_str_is_alpha(str2));	
// }