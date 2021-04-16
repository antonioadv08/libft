/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:54:44 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/16 13:52:50 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int ft_atoi(const char *str)
{
	int i;
	int negative;
	int number;

	i = 0;
	negative = 1;
	number = 0;
	if (ft_strlen(str) > 20 && str[0] == '-')
		return (0);

	if (ft_strlen(str) > 19 && str[0] != '-')
		return (-1);

	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	if (str[i] == '-')
		negative = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + str[i] - 48;
		i++;
	}
	return (number * negative);
}

// int main(void)
// {
// 	char n[40] = "-12345678901235678899";

// 	int i1 = atoi(n);
// 	int i2 = ft_atoi(n);

// 	printf("atoi:    %d \n", i1);
// 	printf("ft_atoi: %d \n", i2);
// }
