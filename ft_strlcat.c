/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c/
                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:45 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/16 00:46:57 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char			*ptr;
	unsigned int	i;

	if (size < ft_strlen(dst))
		return (ft_strlen(src) + size);
	ptr = dst + ft_strlen(dst);
	i = ft_strlen(dst);
	while (i < size - 1 && *src != '\0' && size >= 2)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}
	if (size != 0)
		*ptr = '\0';
	return (ft_strlen(dst) + ft_strlen(src));
}
