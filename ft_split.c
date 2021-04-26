/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 12:07:36 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/26 13:24:30 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>


static int		unleah(char **str, int size)
{
	while (size--)
		free(str[size]);
	return (-1);
}

static int		count_words(const char *str, char charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i + 1] == charset || str[i + 1] == '\0') == 1
				&& (str[i] == charset || str[i] == '\0') == 0)
			words++;
		i++;
	}
	return (words);
}

static void		write_word(char *dest, const char *from, char charset)
{
	int	i;

	i = 0;
	while ((from[i] == charset || from[i] == '\0') == 0)
	{
		dest[i] = from[i];
		i++;
	}
	dest[i] = '\0';
}

static int		write_split(char **split, const char *str, char charset)
{
	int		i;
	int		j;
	int		word;

	word = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] == charset || str[i] == '\0') == 1)
			i++;
		else
		{
			j = 0;
			while ((str[i + j] == charset || str[i + j] == '\0') == 0)
				j++;
			if ((split[word] = (char*)malloc(sizeof(char) * (j + 1))) == NULL)
				return (unleah(split, word - 1));
			write_word(split[word], str + i, charset);
			i += j;
			word++;
		}
	}
	return (0);
}

char			**ft_split(const char *str, char c)
{
	char	**res;
	int		words;

	words = count_words(str, c);
	if ((res = (char**)malloc(sizeof(char*) * (words + 1))) == NULL)
		return (NULL);
	res[words] = 0;
	if (write_split(res, str, c) == -1)
		return (NULL);
	return (res);
}


static void ft_print_result(char const *s)
{
    int len;

    len = 0;
    while (s[len])
        len++;
    write(1, s, len);
}

static void ft_print_tabstr(char **tabstr)
{
    int i;

    i = 0;
    while (tabstr[i] != NULL)
    {
        ft_print_result(tabstr[i]);
        write(1, "\n", 1);
        free(tabstr[i]);
        i++;
    }
    free(tabstr);
}

static void check_split(char *s, char c)
{
    char **tabstr;

    if (!(tabstr = ft_split(s, c)))
        ft_print_result("NULL");
    else
        ft_print_tabstr(tabstr);
}

int main(int argc, const char *argv[])
{
    int arg;

    alarm(5);
    if (argc == 1)
        return (0);
    if ((arg = atoi(argv[1])) == 1)
        check_split("          ", ' ');
    else if (arg == 2)
        check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
    else if (arg == 3)
        check_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
    else if (arg == 4)
        check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'i');
    else if (arg == 5)
        check_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');
    return (0);
}