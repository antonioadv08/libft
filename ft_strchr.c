/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:42 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/15 17:06:26 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strchr(const char *s, int c)
{

	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{

			return ((char *)(s + i));
		}
		i++;
	}

	return (0);
}

// int main(void)
// {
// 	// char c;
// 	char x[] = "hola";
// 	// c = ' ';
// 	printf("strchr:    %p \n", strchr(x, 'l'));
// 	// printf("puntero: %p \n", &c);

// 	printf("ft_strchr: %p \n", ft_strchr(x, 'l'));
// 	// 		char *x;
// 	// 	char *y;
// 	// 	y = memmove(dest, "con\0sec\0\0te\0tur", 10);
// 	// 	x = ft_memmove(dest, "con\0sec\0\0te\0tur", 10);

// 	// 	printf("memmove:    %s \n", y);
// 	// 	printf("ft_memmove: %s \n", x);
// }