/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 18:28:51 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/16 19:06:04 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strs_to_tab.h"

int	ft_strlen(char *s)
{
	int	counter;

	counter = 0;
	while(s[counter])
		counter++;
	return(counter);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		counter;
	int		lenght;

	lenght = 0;
	while (src[lenght])
		lenght++;

	dest = (char *) malloc(sizeof(char) * (lenght + 1));

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

struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str *array;
	int					counter;

	counter = 0;

	array = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (array == NULL)
		return (0);
	while(counter < ac)
	{
		if (av[counter] == NULL)
			return (NULL);
		array[counter].size = ft_strlen(av[counter]);
		array[counter].str = ft_strdup(av[counter]);
		array[counter].copy = ft_strdup(av[counter]);

		if (array->str == NULL || array->copy == NULL)
			return (0);
		counter++;
	}
	array[counter].str = NULL;
	return(array);
}

// void	print_array(t_stock_str *str)
// {
// 	int	i;

// 	i = 0;

// 	while (str[i].str)
// 	{
// 		printf("Indice: %d - Size: %d - String: %s - Copy: %s\n",
// 		i, str[i].size,	str[i].str, str[i].copy);
// 	       i++;	
// 	}
// 	free(str);
// }

// int	main(int argc, char **argv)
// {
// 	print_array(ft_strs_to_tab(argc, argv));
// }