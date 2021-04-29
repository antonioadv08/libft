/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:07:32 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/29 16:29:26 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return (0);
	return ((int)write(fd, s, ft_strlen(s)));
}

/*int main(void)
{

    char *s = "hola";

    ft_putstr_fd(s, 1);
}*/