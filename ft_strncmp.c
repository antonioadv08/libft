/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:56 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/26 14:01:21 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (!n)
		return (0);
	while (str1[i] == str2[i] && str1[i] && str2[i] && n > i)
	{
		i++;
		if (n == i)
		{
			i--;
			return (0);
		}
	}
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}

/*int main(void)
{

    char c[] = "abcdef";
    char x[] = "abcdefghijklmnop";
    int l = 6;

    printf("strncmp:    %i \n", strncmp(c, x, l));

    printf("ft_strncmp: %d \n", ft_strncmp(c, x, l));
}*/
