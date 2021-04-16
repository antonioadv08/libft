/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:42 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/16 16:57:30 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	unsigned char c_unsigned;
	int i;

	c_unsigned = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c_unsigned)
		{

			return ((char *)(s + i));
		}

		i++;
	}
	if (c_unsigned == '\0')
	{
		return ((char *)(s + i));
	}

	return (0);
}

// int main(void)
// {
// 	// char c;S
// 	char x[] = "turdipouillyS~ Se";
// 	// char *p=strchr(x, 't');
// 	// c = ' ';

// 	printf("strchr:    %p \n", strchr(x, 't' + 257));
// 	printf("strchr:    %p \n", strchr(x, 't'));

// 	printf("puntero: %s \n", &x[0]);

// 	printf("ft_strchr: %p \n", ft_strchr(x, 't' + 257));
// 	// 		char *x;
// 	// 	char *y;
// 	// 	y = memmove(dest, "con\0sec\0\0te\0tur", 10);
// 	// 	x = ft_memmove(dest, "con\0sec\0\0te\0tur", 10);

// 	// 	printf("memmove:    %s \n", y);
// 	// 	printf("ft_memmove: %s \n", x);
// }