/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:42:57 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/04 18:47:41 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	check_strings(char *str, char *to_find, int counter)
{
	int	counter1;

	counter1 = 0;
	while (to_find[counter1] && (to_find[counter1] == str[counter]))
	{
		counter1++;
		counter++;
	}
	if (!to_find[counter1])
		return (1);
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	counter;

	counter = 0;
	while (str[counter])
	{
		if (check_strings(str, to_find, counter))
			return (str + counter);
		counter++;
	}
	return (0);
}

// int main(void)
// {
// 	printf("%s", ft_strstr("helloworlld", "ll"));	
// }