/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 12:34:06 by skorac            #+#    #+#             */
/*   Updated: 2018/05/23 10:39:03 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t size);
void	*ft_memmove(void *str1, const void *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
int		ft_memcmp(const void *str1, const void *str2, size_t n);
int		ft_atoi(char *str);				
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_strdup(char *src);
char 	*ft_strcpy(char *S1, char *s2);
char	*ft_strcat(char *dest, char *src);
char	*ft_strchr(const char *s, int i);
char	*ft_strstr(char *lrg, char *sml);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
int		ft_isdigit(int i);
int		ft_isalpha(int i);
int		ft_isalnum(int i);
int		ft_isascii(int i);
int		ft_isprint(int i);
void		ft_putchar(char c);
void		ft_putnbr(char c);
void		ft_putstr(char *str);
void		ft_strclr(char *str);
int		ft_tolower(int i);
int		ft_toupper(int i);

#endif
