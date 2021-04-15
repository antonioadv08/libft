/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:06 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/15 21:15:32 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c)
{
    if ((c >= '0' && c <= '9'))
    {
        return (2048);
    }

    return (0);
}

// int main()
// {
//     char c;
//     c = '9';
//     printf("isdigit: %d", isdigit(c));

//     printf("\nft_isdigit: %d \n", ft_isdigit(c));

//     return 0;
// }
