/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:21:01 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/26 14:12:47 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <string.h>
#include <stdio.h>
*/

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

/*int main ()
{
  char str[] = "This is a sample string";
  char * pch;
  pch=ft_strrchr(str,'s');
  printf ("Last occurence of 's' found at %ld \n",pch-str+1);
  return 0;
}*/