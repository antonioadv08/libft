/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:07:58 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/21 17:44:17 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{

    char *str;
    int i;
    int j;
    int k;

    int s1_len;

    i = 0;
    k = 0;
    j = 0;
    s1_len = ft_strlen(s1);
    str = malloc(s1_len);
    if (str == NULL)
        return (NULL);
    
    

    
        

    


    return str;
}

int main(void)
{

    char *s1 = "hola buenos diasho";
    char *set = "ho";

    printf("ft_strtrim: %s \n", ft_strtrim(s1, set));
}