/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 19:26:05 by gopiment          #+#    #+#             */
/*   Updated: 2026/01/31 20:34:54 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	counter;

	counter = -1;
	while (src[++counter])
		dest[counter] = src[counter];
	dest[counter] = src[counter];
	return (dest);
}

// int main(void)
// {
// 	char	dest[] = "Dest";
// 	char	src[] = "source";

// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// }