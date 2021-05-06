/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:08:00 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/05/06 20:17:59 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	j;

	i = start;
	j = 0;
	substr = malloc(len + 1);
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	if (!s || substr == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substr[0] = '\0';
		return (substr);
	}
	while (i < start + len || s[i] == '\0')
		substr[j++] = s[i++];
	substr[len] = '\0';
	return (substr);
}
