/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/08 16:48:22 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/09 19:17:34 by gopiment         ###   ########.fr       */
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

char	*fulfillment(char *str, char *charset, int init)
{
	char	*dest;
	int		lenght;
	int		counter;

	counter = -1;
	lenght = init;
	dest = (char *) malloc (sizeof (char) * (lenght + 1));
	if (dest == NULL)
		return (NULL);
	while (!charsetcheck(str[lenght], charset))
	{
		dest[++counter] = str[lenght];
		lenght++;
	}
	dest[lenght] = '\0';
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		counter;
	int		array_counter;

	counter = 0;
	array_counter = 0;
	array = (char **) malloc(sizeof(char *) * (countwords(str, charset) + 1));
	if (array == NULL && !str && !charset)
		return (NULL);
	while (str[counter])
	{
		if (!charsetcheck(str[0], charset) && counter == 0)
		{
			array[array_counter] = fulfillment(str, charset, counter);
			counter++;
			array_counter++;
		}
		if (charsetcheck (str[counter - 1], charset)
			&& !charsetcheck(str[counter], charset))
		{
			array[array_counter] = fulfillment(str, charset, counter);
			array_counter++;
		}
		counter++;
	}
	return (array);
}

int main(int argc, char **argv)
{
	(void) argc;
	char **array = ft_split(argv[1], argv[2]);
	int		counter = -1, counter1;

	while(array[++counter])
	{
		counter1 = -1;
		while (array[counter][++counter1])
			write(1, &array[counter][counter1], 1);
		write(1, "\n", 1);
	}
	free(array);
}
