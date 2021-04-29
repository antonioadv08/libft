/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:21:01 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/29 17:07:34 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*ptr;
	unsigned char	c_unsigned;

	i = 0;
	ptr = 0;
	c_unsigned = (unsigned char)c;
	while (s[i])
	{
		if (s[i] == c_unsigned)
			ptr = (char *)(s + i);
		i++;
	}
	if (s[i] == c_unsigned)
		ptr = (char *)(s + i);
	return (ptr);
}
