/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:38:13 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/01 17:18:16 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght])
		lenght++;
	return (lenght);
}

char	*ft_strcat(char *dest, char *src)
{
	int	counter;
	int	dest_lenght;

	counter = 0;
	dest_lenght = ft_strlen(dest);
	while (src[counter])
	{
		dest[dest_lenght + counter] = src[counter];
		counter++;
	}
	dest[dest_lenght + counter] = '\0';
	return (dest);
}

// int main(void)
// {
// 	char dest[] = "oal";
// 	char *src = "ola";
// 	printf("%s", ft_strcat(dest, src));
// }