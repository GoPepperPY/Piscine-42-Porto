/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:25:24 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/01 17:17:49 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	counter;

	counter = 0;
	while (s1[counter] && s2[counter] && s1[counter] == s2[counter])
		counter++;
	return (s1[counter] - s2[counter]);
}

// int main(void)
// {
// 	printf("%d", ft_strcmp("dasdsad", "dasdsad"));
// }