/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:42 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/29 17:05:52 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c_unsigned;
	int				i;

	c_unsigned = (unsigned char)c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c_unsigned)
		{
			return ((char *)(s + i));
		}
		i++;
	}
	if (c_unsigned == '\0')
	{
		return ((char *)(s + i));
	}
	return (0);
}
