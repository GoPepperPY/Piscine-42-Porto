/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:05:23 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/04 18:47:27 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

int	ft_strlen(char *str)
{
	int	lenght;

	lenght = 0;
	while (str[lenght])
		lenght++;
	return (lenght);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	counter;
	int				dest_lenght;

	counter = 0;
	dest_lenght = ft_strlen(dest);
	while (src[counter] && nb > counter)
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
// 	printf("%s", ft_strncat(dest, src, 2));
// }