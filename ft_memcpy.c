/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:33 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/16 13:27:56 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if (dest == NULL && src == NULL)
    {
        return (NULL);
    }
    while (i < n && ((unsigned char *)src)[i] != '\n')
    {
        ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        i++;
    }

    return (dest);
}

// int main()
// {
//     // char src[] = "hola";
//     // char dest[] = "felex";
//     int number = 3;
//     // printf("memcpy: %p \n", memcpy(NULL, NULL, number));

//     printf("ft_memcpy: %p \n", ft_memcpy(NULL, NULL, number));
// }
