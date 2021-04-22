/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:07:56 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/23 00:19:07 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{

    char *str;
    int i;

    i = 0;
    if (!s)
        return (NULL);
    str = (char *)malloc(ft_strlen(s) + 1);
    if (!str)
        return (NULL);
    while (s[i] != '\0')
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}

// static void ft_print_result(char const *s)
// {
//     int len;

//     len = 0;
//     while (s[len])
//         len++;
//     write(1, s, len);
// }

// static char mapi(unsigned int i, char c)
// {
//     static int indexArray[11] = {0};

//     if (i > 10 || indexArray[i] == 1)
//         write(1, "wrong index\n", 12);
//     else
//         indexArray[i] = 1;
//     if (c >= 'a' && c <= 'z')
//         return (c - 32);
//     else if (c >= 'A' && c <= 'Z')
//         return (c + 32);
//     else
//         return (c);
// }

// int main(int argc, const char *argv[])
// {
//     char *str;
//     char *strmapi;

//     alarm(5);
//     str = (char *)malloc(sizeof(*str) * 12);
//     if (argc == 1 || !str)
//         return (0);
//     else if (atoi(argv[1]) == 1)
//     {
//         strcpy(str, "LoReM iPsUm");
//         if (!(strmapi = ft_strmapi(str, &mapi)))
//             ft_print_result("NULL");
//         else
//         {
//             ft_print_result(strmapi);
//             if (strmapi[11] != '\0')
//                 ft_print_result("\nString is not null terminated");
//             if (strmapi == str)
//                 ft_print_result("\nA new string was not returned");
//             else
//                 free(strmapi);
//         }
//     }
//     free(str);
//     return (0);
// }