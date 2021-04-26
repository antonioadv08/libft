/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:07:16 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/26 14:26:03 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int	ft_estim(long n)
{
	size_t	estim;
	int		isneg;

	estim = 0;
	isneg = 0;
	if (n < 0)
	{
		estim++;
		isneg++;
		n = -n;
	}
	while (n >= 1)
	{
		estim++;
		n /= 10;
	}
	return (estim);
}

static char	*ft_gen(char *rtn, long nbr, int len, int isneg)
{
	if (nbr != 0)
		rtn = malloc(sizeof(char) * (len + 1));
	else
		return (rtn = ft_strdup("0"));
	if (!rtn)
		return (0);
	isneg = 0;
	if (nbr < 0)
	{
		isneg++;
		nbr = -nbr;
	}
	rtn[len] = '\0';
	while (--len)
	{
		rtn[len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (isneg == 1)
		rtn[0] = '-';
	else
		rtn[0] = (nbr % 10) + '0';
	return (rtn);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*rtn;
	long	nbr;
	int		isneg;

	nbr = n;
	len = ft_estim(nbr);
	rtn = 0;
	isneg = 0;
	rtn = ft_gen(rtn, nbr, len, isneg);
	if (!rtn)
		return (0);
	return (rtn);
}

/*static void ft_print_result(char *s)
{
    int len;

    if (!s)
        write(1, "NULL", 4);
    else
    {
        len = 0;
        while (s[len])
            len++;
        write(1, s, len);
        free(s);
    }
}

int main(int argc, const char *argv[])
{
    int arg;

    alarm(5);
    if (argc == 1)
        return (0);
    else if ((arg = atoi(argv[1])) == 1)
        ft_print_result(ft_itoa(0));
    else if (arg == 2)
        ft_print_result(ft_itoa(9));
    else if (arg == 3)
        ft_print_result(ft_itoa(-9));
    else if (arg == 4)
        ft_print_result(ft_itoa(10));
    else if (arg == 5)
        ft_print_result(ft_itoa(-10));
    else if (arg == 6)
        ft_print_result(ft_itoa(8124));
    else if (arg == 7)
        ft_print_result(ft_itoa(-9874));
    else if (arg == 8)
        ft_print_result(ft_itoa(543000));
    else if (arg == 9)
        ft_print_result(ft_itoa(-2147483648LL));
    else if (arg == 10)
        ft_print_result(ft_itoa(2147483647));
    return (0);
}*/