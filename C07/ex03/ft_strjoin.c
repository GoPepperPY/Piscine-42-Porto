/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 16:50:59 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/16 18:14:17 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen_matrix(char **string, int size)
{
	int	counter;
	int	lenght;
	int	counter1;

	counter = 0;
	lenght = 0;
	while (counter < size)
	{
		counter1 = 0;
		while (string[counter][counter1])
			counter1++;
		lenght += counter1;
		counter++;
	}
	return (lenght);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		lenght;
	char	*final;
	int		counter;

	if (size <= 0)
	{
		final = (char *)malloc(1);
		if (!final)
			return (0);
		final[0] = '\0';
		return (final);
	}
	counter = -1;
	lenght = (ft_strlen_matrix(strs, size) + (ft_strlen(sep) * (size - 1)));
	final = (char *) malloc(sizeof(char) * (lenght + 1));
	if (!final)
		return (0);
	final[0] = '\0';
	while (size > ++counter)
	{
		ft_strcat(final, strs[counter]);
		if (counter < size - 1)
			ft_strcat(final, sep);
	}
	return (final);
}

// #include <stdio.h>
// int main(int argc, char **argv)
// {
// 	argv[1] = "ola";
// 	argv[2] = "ola";
// 	argv[3] = "ola";
// 	char *s = ft_strjoin(3, argv + 1, " ");
// 	if (!s) return 1;
// 	printf("%s\n", s);
// 	free(s);
// }