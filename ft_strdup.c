/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:08:04 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/19 18:43:24 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_strdup( char *s)
{
    char *d;
    size_t size;

    size = ft_strlen(s);
    d = (char *)malloc(size + 1);
    if (!d)
        return (NULL);
    ft_strlcpy(d, s, size + 1);
    return (d);
}

int main(void)
{
    char *str;
    char *str_ft;

    char *tmp = "HAHAHA \0 tu me vois pas !";

    str = strdup(tmp);
    str_ft = ft_strdup(tmp);

    printf("strdup  :   %p\n", str);
    printf("ft_strdup : %p\n", str_ft);
}