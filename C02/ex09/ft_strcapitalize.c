/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:53:29 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 17:49:15 by gopiment         ###   ########.fr       */
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
			str[counter] += 32;
		counter++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	counter;

	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	counter = 1;
	while (str[counter])
	{
		if (!((str[counter - 1] >= 'a' && str[counter - 1] <= 'z')
				|| (str[counter - 1] >= 'A' && str[counter - 1] <= 'Z')
				|| (str[counter - 1] >= '0' && str[counter - 1] <= '9')))
		{
			if (str[counter] >= 'a' && str[counter] <= 'z')
				str[counter] -= 32;
		}
		counter++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	str[] = "OLA, tudo BEM? 42palavras";
// 	printf("%s\n", ft_strcapitalize(str));
// }