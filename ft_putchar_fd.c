/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:07:22 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/26 14:22:36 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_putchar_fd(char c, int fd)
{
	return ((int)write(fd, &c, 1));
}

/*int main(int argc, const char *argv[])
{
    int i;
    int arg;

    // alarm(5);
    if (argc == 1)
        return (0);
    else if ((arg = atoi(argv[1])) == 1)
    {
        i = 0;
        while (i <= 47)
        {
            ft_putchar_fd(i, 2);
            i++;
        }
    }
    else if (arg == 2)
    {
        i = '0';
        while (i <= '9')
        {
            ft_putchar_fd(i, 1);
            i++;
        }
    }
    else if (arg == 3)
    {
        i = 58;
        while (i <= 64)
        {
            ft_putchar_fd(i, 2);
            i++;
        }
    }
    else if (arg == 4)
    {
        i = 'A';
        while (i <= 'Z')
        {
            ft_putchar_fd(i, 1);
            i++;
        }
    }
    else if (arg == 5)
    {
        i = 91;
        while (i <= 96)
        {
            ft_putchar_fd(i, 2);
            i++;
        }
    }
    else if (arg == 6)
    {
        i = 'a';
        while (i <= 'z')
        {
            ft_putchar_fd(i, 1);
            i++;
        }
    }
    else if (arg == 7)
    {
        i = 123;
        while (i <= 127)
        {
            ft_putchar_fd(i, 2);
            i++;
        }
    }
    return (0);
}*/