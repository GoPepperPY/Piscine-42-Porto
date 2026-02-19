/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 13:51:52 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/01 17:19:27 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	counter;

	counter = 0;
	while (str[counter])
		counter++;
	return (counter);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	counter;
	unsigned int	dest_lenght;
	unsigned int	src_lenght;
	unsigned int	result;

	counter = 0;
	result = 0;
	dest_lenght = ft_strlen(dest);
	src_lenght = ft_strlen(src);
	if (size > dest_lenght)
		result = dest_lenght + src_lenght;
	else
		result = src_lenght + size;
	while (src[counter] && size > (dest_lenght + 1))
	{
		dest[dest_lenght] = src[counter];
		dest_lenght++;
		counter++;
	}
	dest[dest_lenght] = '\0';
	return (result);
}

// int	main(void)
// {
// 	char	dest[] = "dest";
// 	char	src[] = "src";
// 	int		size = 6;

// 	printf("Dest Before: %s\n", dest);
// 	printf("Return of strlcat: %d\n", ft_strlcat(dest, src, size));
// 	printf("Dest after: %s\n", dest);
// }
