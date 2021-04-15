/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:22 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/14 20:24:09 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memccpy(void *dest, const void *orig, int c, size_t n)
{

    unsigned char cuc;
    unsigned char *dstc;
    const unsigned char *srccc;
    size_t i;

    cuc = (unsigned char)c;
    dstc = (unsigned char *)dest;
    srccc = (const unsigned char *)orig;
    i = 0;
    while (i < n)
    {
        dstc[i] = srccc[i];
        if (srccc[i] == cuc)
            return (dest + i + 1);
        i++;
    }
    return (0);
}

// int main(void)
// {

//     char buf1[] = "Ceci est un test.";
//     char buf2[200];
//     void *p1, *p2;

//     p1 = memccpy(buf2, buf1, 'i', 10);
//     p2 = ft_memccpy(buf2, buf1, 'i', 10);
//     printf("memccpy %p: \n", p1);
//     printf("ft_memccpy %p: \n", p2);
// }