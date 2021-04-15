/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:18 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/14 20:24:05 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isprint(int c)
{
    if ((c >= 32 && c <= 126))
    {
        return (16384);
    }

    return (0);
}

// int main()
// {
//     char c;
//     c =31;
//     printf("isprint: %d", isprint(c));

//     printf("\nft_isprint: %d \n", ft_isprint(c));

//     return 0;
// }