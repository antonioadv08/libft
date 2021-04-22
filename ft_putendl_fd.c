/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:07:25 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/23 01:05:42 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "libft.h"

int ft_putendl_fd(char *s, int fd)
{
    if (!s)
        return(0);
    while (*s)
        write(fd, s++, 1);
    return write(fd, "\n", 1);
}

int main(int argc, const char *argv[])
{
    int arg;

    alarm(5);
    if (argc == 1)
        return (0);
    else if ((arg = atoi(argv[1])) == 1)
        ft_putendl_fd("lorem ipsum dolor sit amet", 2);
    else if (arg == 2)
        ft_putendl_fd("  lorem\nipsum\rdolor\tsit amet  ", 1);
    else if (arg == 3)
        ft_putendl_fd("", 2);
    else if (arg == 4)
        ft_putendl_fd("lorem ipsum do\0lor sit amet", 1);
    return (0);
}