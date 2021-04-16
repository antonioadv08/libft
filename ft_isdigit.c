/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:06 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/16 15:01:32 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>


int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

// int main()
// {
//     char c;
//     c = 'a';
//     printf("isdigit: %d", isdigit(c));

//     printf("\nft_isdigit: %d \n", ft_isdigit(c));

//     return 0;
// }
