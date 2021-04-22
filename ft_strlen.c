/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:51 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/22 19:55:25 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>
// #include "libft.h"
#include <stddef.h>



size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}

// int	main(void)
// {
// 	char *str;

// 	str = "Hello ";
// 	printf("c  : %lu\n", strlen(str));
// 	printf("ft : %ld\n", ft_strlen(str));
// }