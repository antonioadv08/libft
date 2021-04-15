/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:38 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/14 20:34:06 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memset(void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n && ((unsigned char *)s)[i] != '\n')
    {
        ((unsigned char *)s)[i] = c;
        i++;
    }

    return (s);
}

// int main()
// {
//     char s[] = "holaasdasd";
//     char c = 'a';
//     int number = 10;
//     printf("memset: %s \n", memset(s, c, number));

//     printf("ft_memset: %s \n", ft_memset(s, c, number));
// }
