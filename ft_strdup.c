/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:08:04 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/29 17:05:59 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s)
{
	char	*d;
	size_t	size;

	size = ft_strlen(s);
	d = (char *)malloc(size + 1);
	if (!d)
		return (NULL);
	ft_strlcpy(d, s, size + 1);
	return (d);
}
