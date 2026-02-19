/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 21:09:08 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/07 21:26:23 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ex04/ft_strs_to_tab.h"

void	ft_putstr(char *s)
{
	int	counter;

	counter = -1;
	while (s[++counter])
		write(1, &s[counter], 1);
}

void    ft_putnbr(int nb)
{
        if (nb < 0)
        {
                nb = -nb;
				write(1, "-", 1);
        }
        if (nb > 9)
        {
                ft_putnbr(nb / 10);
                ft_putnbr(nb % 10);
        }
        else
		{
			nb += '0';
			write(1, &nb, 1);
		}
}

void ft_show_tab(struct s_stock_str *par)
{
	int	counter;

	counter = 0;
	while(par[counter].str)
	{
		ft_putstr(par[counter].str);
		write(1, "\n", 1);
		ft_putnbr(par[counter].size);
		write(1, "\n", 1);
		ft_putstr(par[counter].copy);
		write(1, "\n", 1);
		counter++;
	}
	free(par);
}

// int	ft_strlen(char *s)
// {
// 	int	counter;

// 	counter = 0;
// 	while(s[counter])
// 		counter++;
// 	return(counter);
// }

// char	*ft_strdup(char *src)
// {
// 	char	*dest;
// 	int		counter;
// 	int		lenght;

// 	lenght = 0;
// 	while (src[lenght])
// 		lenght++;

// 	dest = (char *) malloc(sizeof(char) * (lenght + 1));

// 	if (dest == NULL)
// 		return (NULL);
// 	counter = 0;

// 	while (counter < lenght)
// 	{
// 		dest[counter] = src[counter];
// 		counter++;
// 	}
// 	dest[counter] = '\0';
// 	return (dest);
// }

// struct	s_stock_str *ft_strs_to_tab(int ac, char **av)
// {
// 	struct s_stock_str *array;
// 	int					counter;

// 	counter = 0;

// 	array = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
// 	if (array == NULL)
// 		return (0);
// 	while(counter < ac)
// 	{
// 		if (av[counter] == NULL)
// 			return (NULL);
// 		array[counter].size = ft_strlen(av[counter]);
// 		array[counter].str = ft_strdup(av[counter]);
// 		array[counter].copy = ft_strdup(av[counter]);

// 		if (array->str == NULL || array->copy == NULL)
// 			return (0);
// 		counter++;
// 	}
// 	array[counter].str = NULL;
// 	return(array);
// }

// int	main(int argc, char **argv)
// {
// 	ft_show_tab(ft_strs_to_tab(argc, argv));
// }