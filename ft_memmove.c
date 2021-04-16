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

// void *ft_memmove(void *dest, const void *src, size_t n)
// {
// 	size_t i;

// 	i = 0;
// 	while (i < n && ((unsigned char *)src)[i] != '\n')
// 	{
// 		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
// 		i++;
// 	}
// 	return ((char *)dest);
// }
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destin;
	unsigned char	*source;
	size_t			i;

	destin = (unsigned char *)dest;
	source = (unsigned char *)src;
	if (src == NULL && dest == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		if (src < dest)
			destin[n - i - 1] = source[n - i - 1];
		else
			destin[i] = source[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char *x;
// 	char *y;

// 	char dst1[0xF0];
// 	char dst2[0xF0];
// 	char *data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";
// 	int size = 0xF0 - 0xF;

// 	memset(dst1, 'A', sizeof(dst1));
// 	memset(dst2, 'A', sizeof(dst2));

// 	memcpy(dst1, data, strlen(data));
// 	memcpy(dst2, data, strlen(data));
// 	y = memmove(dst1 + 3, dst1, size);

// 	x = ft_memmove(dst2 + 3, dst2, size);

// 	printf("memmove:    %s \n", y);
// 	printf("ft_memmove: %s \n", x);
// }
