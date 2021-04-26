/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:12 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/26 14:00:03 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1024);
	}
	return (0);
}

/*int main()
{
    char c;
    c = 'A';
    printf("isdigit: %d", isalpha(c));

    printf("\nft_isdigit: %d \n", ft_isalpha(c));

    return 0;
}*/
