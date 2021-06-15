/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:54:44 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/06/15 18:34:18 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_space(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ');
}

int	ft_atoi(const char *nptr)
{
	long unsigned	n;
	int				sign;
	long unsigned	max;

	sign = 1;
	max = 9223372036854775807;
	n = 0;
	while (ft_space(*nptr))
		nptr++;
	if (*nptr == '-')
		sign = -sign;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		n = 10 * n + (*nptr - '0');
		if (n > max && sign == 1)
			return (-1);
		if (n > max + 1 && sign == -1)
			return (0);
		nptr++;
	}
	return (sign * n);
}
