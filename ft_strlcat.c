/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c/
                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:45 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/16 00:46:57 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #define STRING_1 "the cake is a lie !\0I'm hidden lol\r\n"
// #define STRING_4 "phrase differente pour le test"
// #define STRING_2 "there is no stars in the sky"
// #define STRING_3 "test basic !"
// #include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include <string.h>

// size_t len(const char *s)
// {
// 	int i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		i++;
// 	}
// 	return (i);
// }

// size_t ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	int dst_len;
// 	int src_len;
// 	int size_i = size;
// 	int i;
// 	int j;
// 	// printf("antes size:  %li\n", size);

// 	// printf("antes dst:  %s\n", dst);
// 	// printf("antes src   %s\n", src);

// 	src_len = len(src);
// 	dst_len = len(dst);
// 	i = 0;
// 	j = dst_len;

// 	while (i < size_i)
// 	{
// 		dst[j] = src[i];
// 		i++;
// 		j++;
// 	}

// 	if (size_i <= dst_len || (dst_len + src_len) < size_i)
// 	{

// 		printf("dst:  %s\n", dst);
// 		printf("src   %s\n", src);
// 		return (dst_len + src_len);
// 	}
// 	else
// 	{
// 		return (size_i - 1);
// 	}
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char			*ptr;
	unsigned int	i;

	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	ptr = dst + ft_strlen(dst);
	i = ft_strlen(dst);
	while (i < size - 1 && *src != '\0' && size >= 2)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	if (size != 0)
		*ptr = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}

// int main(void)
// {
// 	// char c[] = " ";
// 	// char x[] = " ";
// 	// int l = 4;
// 	// c = 'h';
// 	// printf("strlcat:    %li \n", strlcat(c, x, l));

// 	// printf("ft_strlcat: %li \n", ft_strlcat(c, x, l));
// 	// printf("ft_strlcat: %s \n", c);

// 	// char *str = STRING_1;
// 	// char buff1[0xF00] = STRING_2;
// 	// char buff2[0xF00] = STRING_2;
// 	// size_t max = strlen(STRING_1) + 4;
// 	char s1[4] = "4";
// 	char s2[4] = "";
// 	char r1,r2;
// 	r1 = strlcat(s1, "thx to ntoniolo for this test !", 4);
// 	r2 = ft_strlcat(s2, "thx to ntoniolo for this test !", 4);

// 	printf("strlcat    %i \n", r1);
// 	printf("ft_strlcat %i \n", r2);
// }

// static void ft_print_result(int n)
// {
// 	char c;

// 	if (n >= 10)
// 		ft_print_result(n / 10);
// 	c = n % 10 + '0';
// 	write(1, &c, 1);
// }

// static void check_strlcat(char *dest, char *src, int size, int dest_len)
// {
// 	ft_print_result(ft_strlcat(dest, src, size));
// 	write(1, "\n", 1);
// 	// write(1, dest, dest_len);
// 	free(dest);
// }

// int main(int argc, const char *argv[])
// {
// 	char *dest;
// 	int arg;
// 	int dest_len;

// 	alarm(5);
// 	dest_len = 15;
// 	if (!(dest = (char *)malloc(sizeof(*dest) * dest_len)) || argc == 1)
// 		return (0);
// 	memset(dest, 0, dest_len);
// 	memset(dest, 'r', 6);
// 	if ((arg = atoi(argv[1])) == 1)
// 	{
// 		dest[11] = 'a';
// 		check_strlcat(dest, "lorem", 15, dest_len);
// 	}
// 	else if (arg == 2)
// 		check_strlcat(dest, "", 15, dest_len);
// 	else if (arg == 3)
// 	{
// 		dest[0] = '\0';
// 		dest[11] = 'a';
// 		check_strlcat(dest, "lorem ipsum", 15, dest_len);
// 	}
// 	else if (arg == 4)
// 	{
// 		dest[14] = 'a';
// 		check_strlcat(dest, "lorem ipsum dolor sit amet", 15, dest_len);
// 	}
// 	else if (arg == 5)
// 	{
// 		dest[10] = 'a';
// 		check_strlcat(dest, "lorem ipsum dolor sit amet", 0, dest_len);
// 	}
// 	else if (arg == 6)
// 	{
// 		dest[10] = 'a';
// 		check_strlcat(dest, "lorem ipsum dolor sit amet", 1, dest_len);
// 	}
// 	else if (arg == 7)
// 	{
// 		memset(dest, 'r', 15);
// 		check_strlcat(dest, "lorem ipsum dolor sit amet", 5, dest_len);
// 	}
// 	else if (arg == 8)
// 	{
// 		dest[10] = 'a';
// 		check_strlcat(dest, "lorem ipsum dolor sit amet", 6, dest_len);
// 	}
// 	else if (arg == 9)
// 	{
// 		memset(dest, 'r', 14);
// 		check_strlcat(dest, "lorem ipsum dolor sit amet", 15, dest_len);
// 	}
// 	return (0);
// }