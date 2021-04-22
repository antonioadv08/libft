/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:15 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/22 15:08:27 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isascii(int c)
{
    if ((c >= 00 && c <= 127))
    {
        return (1);
    }

    return (0);
}

// int main()
// {
//     char c;
//     c =128;
//     printf("isascii: %d", isascii(c));

//     printf("\nft_isascii: %d \n", ft_isascii(c));

//     return 0;
// }