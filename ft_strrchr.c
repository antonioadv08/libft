/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/07 15:21:01 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/16 17:01:19 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string.h>
// #include <stdio.h>

// char *strrchr(const char *s, int c)
// {
// }

// int main()
// {
//     char str[] = "Hello World!";
//     char ch = 'o';
//     char *p;
//     p= strrchr(str, ch);

//     printf("resultado strrchr: %d\n", *p);
//     printf("resultado ft_strrchr: %d\n", *p);
// }

/* strrchr example */
#include <stdio.h>
#include <string.h>

// int main ()
// {
//   char str[] = "This is a sample string";
//   char * pch;
//   pch=strrchr(str,'s');
//   printf ("Last occurence of 's' found at %ld \n",pch-str+1);
//   return 0;
// }

char *ft_strrchr(const char *s, int c)
{
	int i;
	char *ptr;
	unsigned char c_unsigned;

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

// int main ()
// {
//   char str[] = "This is a sample string";
//   char * pch;
//   pch=ft_strrchr(str,'s');
//   printf ("Last occurence of 's' found at %ld \n",pch-str+1);
//   return 0;
// }