/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:08:00 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/21 12:51:57 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
#include "libft.h"

// size_t ft_strlen(const char *s);
// size_t ft_strlcpy(char *dest, char *src, unsigned int size);

char *ft_substr(char *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t j;

    i = start;
    j = 0;
    substr = malloc(len);

    if (!s || start >= ft_strlen(s) || substr == NULL)
    {
        return (NULL);
    }
    while (i < start + len || s[i] == '\0')
    {

        substr[j] = s[i];
        i++;
        j++;
    }

    return substr;
}

// int main(void)
// {
//     char *str = " ";
//     int start = 3;
//     int len = 10;

//     printf("ft_substr : %s \n", ft_substr(str, start, len));
// }