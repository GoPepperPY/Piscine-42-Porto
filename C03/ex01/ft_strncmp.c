/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gopiment <gopiment@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/30 12:30:16 by gopiment          #+#    #+#             */
/*   Updated: 2026/02/04 18:38:04 by gopiment         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	counter;

	counter = 0;
	while (counter < n)
	{
		if (s1[counter] != s2[counter] || s1[counter] == '\0')
			return (s1[counter] - s2[counter]);
		counter++;
	}
	return (0);
}

// int main(void)
// {
// 	printf("%d", ft_strcmp("dasdsad", "dasdsad"));
// }