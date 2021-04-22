/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adiez-ve <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/10 12:44:57 by adiez-ve          #+#    #+#             */
/*   Updated: 2021/04/22 19:55:30 by adiez-ve         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <ctype.h>

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

int ft_atoi(const char *str);
void ft_bzero(void *s, size_t n);
int ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_isdigit(int c);

void *ft_memccpy(void *dest, const void *orig, int c, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void *ft_memset(void *s, int c, size_t n);

char *ft_strchr(const char *s, int c);
size_t ft_strlen(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t size);
size_t ft_strlcpy(char *dest, char *src, unsigned int size);
int ft_strncmp(const char *str1, const char *str2, size_t n);
char *ft_strnstr(const char *str, const char *find, size_t len);
char *ft_strrchr(const char *s, int c);
char *ft_strdup(char *s);
int ft_tolower(int c);
int ft_toupper(int c);

char *ft_substr(char *s, unsigned int start, size_t len);
void *ft_calloc(size_t nmemb, size_t size);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s1, char const *set);
char **ft_split(char const *s, char c);

#endif