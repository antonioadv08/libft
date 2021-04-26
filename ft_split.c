/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:07:36 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/26 13:16:57 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

static int ft_count_words(const char *s, char c)
{
    int count;
    int i;

    i = 0;
    count = 0;
    while (s[i] != '\0')
    {
        if (s[i] != c)
        {
            count++;
            while (s[i] != c && s[i] != '\0')
                i++;
        }
        else
            i++;
    }
    return (count);
}

static char **ft_fill_array(char **aux, char const *s, char c)
{
    size_t i;
    size_t j;
    int k;
    size_t s_len;

    i = 0;
    k = 0;
    s_len = ft_strlen(s);
    while (s[i])
    {
        while (s[i] == c && s[i] != '\0')
            i++;
        j = i;
        while (s[i] != c && s[i] != '\0')
            i++;
        if (j >= s_len)
            aux[k++] = "\0";
        else
            aux[k++] = ft_substr(s, j, i - j);
    }
    return (aux);
}

char **ft_split(char const *s, char c)
{
    char **aux;
    int nwords;

    if (!s)
        return (NULL);
    nwords = ft_count_words(s, c);
    aux = malloc((nwords + 1) * sizeof(char *));
    if (aux == NULL)
        return (NULL);
    aux = ft_fill_array(aux, s, c);
    aux[nwords] = NULL;
    return (aux);
}

// static void ft_print_result(char const *s)
// {
//     int len;

//     len = 0;
//     while (s[len])
//         len++;
//     write(1, s, len);
// }

// static void ft_print_tabstr(char **tabstr)
// {
//     int i;

//     i = 0;
//     while (tabstr[i] != NULL)
//     {
//         ft_print_result(tabstr[i]);
//         write(1, "\n", 1);
//         free(tabstr[i]);
//         i++;
//     }
//     free(tabstr);
// }

// static void check_split(char *s, char c)
// {
//     char **tabstr;

//     if (!(tabstr = ft_split(s, c)))
//         ft_print_result("NULL");
//     else
//         ft_print_tabstr(tabstr);
// }

// int main(int argc, const char *argv[])
// {
//     int arg;

//     alarm(5);
//     if (argc == 1)
//         return (0);
//     if ((arg = atoi(argv[1])) == 1)
//         check_split("          ", ' ');
//     else if (arg == 2)
//         check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
//     else if (arg == 3)
//         check_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
//     else if (arg == 4)
//         check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
//     else if (arg == 5)
//         check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
//     return (0);
// }