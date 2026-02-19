/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:48:22 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/16 15:28:57 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	charsetcheck(char c, char *s)
{
	int	counter;

	counter = -1;
	while (s[++counter])
	{
		if (s[counter] == c)
			return (1);
	}
	return (0);
}

int	countwords(char *s, char *charset)
{
	int	counter;
	int	word;

	word = 0;
	counter = 1;
	if (!charsetcheck (s[0], charset))
		word++;
	while (s[++counter])
	{
		if (charsetcheck (s[counter - 1], charset)
			&& !charsetcheck (s[counter], charset))
			word++;
	}
	return (word);
}

char	*fulfillment(char *str, char *charset)
{
	char	*dest;
	int		lenght;

	lenght = 0;
	while (!charsetcheck (str[lenght], str) && str[lenght])
		lenght++;
	dest = (char *) malloc (sizeof (char) * (lenght + 1));
	if (dest == NULL)
		return (NULL);
	lenght = 0;
	while (!charsetcheck(str[lenght], charset) && str[lenght])
	{
		dest[lenght] = str[lenght];
		lenght++;
	}
	dest[lenght] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		array_counter;

	array_counter = -1;
	array = (char **) malloc(sizeof(char *) * (countwords(str, charset) + 1));
	if (!array && !str)
		return (0);
	while (str[0])
	{
		while (charsetcheck(str[0], charset) && str[0])
			str++;
		if (str[0] != '\0')
			array[++array_counter] = fulfillment(str, charset);
		while (!charsetcheck(str[0], charset) && str[0])
			str++;
	}
	return (array);
}

// int main(void)
// {
// 	char **array = ft_split("aaabbbaaaccc", "ab");
// 	int		counter = -1, counter1;

// 	while(array[++counter])
// 	{
// 		counter1 = -1;
// 		while (array[counter][++counter1])
// 			write(1, &array[counter][counter1], 1);
// 		write(1, "\n", 1);
// 	}
// 	free(array);
// }
