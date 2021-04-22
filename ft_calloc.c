/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:07:09 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/22 14:30:37 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
    char *str;

    if (nmemb <= 0 || size <= 0)
        str = (char *)malloc(1);
    else
        str = (char *)malloc(nmemb * size);
    if (!str)
        return (NULL);
    return (ft_memset(str, 0, nmemb * size));
}

// int main()
// {
//     char x[] = {1,2,3,6,5,8,9};
//     int size = -1;

//     printf("calloc:    %p \n", calloc(*x, size));
//     printf("ft_calloc: %p \n", ft_calloc(*x, size));
// }
