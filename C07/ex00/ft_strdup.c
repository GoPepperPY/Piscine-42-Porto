/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 12:18:08 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/10 15:13:22 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		counter;
	int		lenght;

	lenght = 0;
	while (src[lenght])
		lenght++;
	dest = (char *) malloc(sizeof(char) * lenght);
	if (dest == NULL)
		return (NULL);
	counter = 0;
	while (counter < lenght)
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
