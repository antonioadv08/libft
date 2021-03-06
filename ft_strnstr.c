/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:20:59 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/29 17:07:22 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	int		i;
	size_t	j;

	i = 0;
	j = 0;
	if (ft_strlen(find) == 0)
		return ((char *)str);
	while (ft_strlen(str) > 0)
	{
		if (str[0] == find[i])
			i++;
		else
		{
			str -= i;
			j -= i;
			i = 0;
		}
		if (j >= len)
			return (NULL);
		if (i == (int)ft_strlen(find))
			return ((char *)str - i + 1);
		str++;
		j++;
	}
	return (NULL);
}
