/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 6:20:36 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/6 16:16:47 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;

	i = 0;
	while (i < n && ((unsigned char *)src)[i] != '\n')
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return ((char *)dest);
}

// int main()
// {
// 	char src[] = "lorem ipsum dolor sit amet";
// 	char *dest;

// 	dest = src + 1;
// 	// int number = 8;

// 		char *x;
// 	char *y;
// 	y = memmove(dest, "con\0sec\0\0te\0tur", 10);
// 	x = ft_memmove(dest, "con\0sec\0\0te\0tur", 10);

// 	printf("memmove:    %s \n", y);
// 	printf("ft_memmove: %s \n", x);
// }
