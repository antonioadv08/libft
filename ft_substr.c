/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:08:00 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/22 18:15:14 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char *s, unsigned int start, size_t len)
{
    char *substr;
    size_t i;
    size_t j;

    i = start;
    j = 0;
    substr = malloc(len + 1);

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
    substr[len] = '\0';

    return substr;
}

// int main(void)
// {
//     char *str = "hola buenos dias";
//     int start = 3;
//     int len = 10;

//     printf("ft_substr : %s \n", ft_substr(str, start, len));
// }