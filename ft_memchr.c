/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:25 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/14 20:24:14 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memchr(const void *s, int c, size_t n)
{

    size_t i;

    i = 0;
    while (i < n && (unsigned char)c != ((unsigned char *)s)[i])
    {
        i++;

        if (i == n)
        {
            return (NULL);
        }
    }
    return ((void *)s + i);
}

// int main()
// {
//     char c;
//     char x[] = "hola";
//     int number = 4;
//     c = 'a';
//     printf("memchr: %p \n", memchr(x, c, number));

//     printf("ft_memchr: %p \n", ft_memchr(x, c, number));
// }
