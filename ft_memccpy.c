/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:22 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/29 17:03:27 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *orig, int c, size_t n)
{
	unsigned char		cuc;
	unsigned char		*dstc;
	const unsigned char	*srccc;
	size_t				i;

	cuc = (unsigned char)c;
	dstc = (unsigned char *)dest;
	srccc = (const unsigned char *)orig;
	i = 0;
	while (i < n)
	{
		dstc[i] = srccc[i];
		if (srccc[i] == cuc)
			return (dest + i + 1);
		i++;
	}
	return (0);
}
