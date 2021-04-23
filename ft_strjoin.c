/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 11:58:47 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/23 16:01:59 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    int i;
    int j;
    int s1_len;
    int s2_len;
    char *dest;

    i = 0;
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    dest = malloc(s1_len + s2_len);
    j = 0;
    if (s1 == NULL || s2 == NULL || dest == NULL)
        return (NULL);

    while (j < s1_len)
        dest[j++] = s1[i++];
    i = 0;
    while (j <= s1_len + s2_len)
        dest[j++] = s2[i++];

    dest[s1_len + s2_len] = '\0';
    return (dest);
}

// int main(void)
// {

//     char *s1 = "hola";
//     char *s2 = "felex";

//     printf("ft_strjoin: %s \n", ft_strjoin(s1, s2));
// }