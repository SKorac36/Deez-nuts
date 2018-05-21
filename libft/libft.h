/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 12:34:06 by skorac            #+#    #+#             */
/*   Updated: 2018/05/21 14:38:52 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

int		ft_atoi(char *str);				//1
int		ft_strcmp(char *s1, char *s2);	//2
int		ft_strlen(char *str);			//3
char	*ft_strdup(char *src);			//4
char 	*ft_strcpy(char *S1, char *s2);	//5
char	*ft_strcat(char *dest, char *src); //6
char	*ft_strchr(const char *s, int i); //7
char	*ft_strstr(char *lrg, char *sml);	//8
int		ft_strncmp(char *s1, char *s2, unsigned int n); //9
int		ft_isdigit(int i);				//10
int		ft_isalpha(int i);				//12
int		ft_isalnum(int i);				//13
int		ft_isascii(int i);				//14
int		ft_isprint(int i);				//15
void		ft_putchar(char c);			//16
void		ft_putnbr(char c);			//17
void		ft_putstr(char *str);		//18
void		ft_strclr(char *str);		//19
int		ft_tolower(int i);				//20
int		ft_toupper(int i);				//21

#endif
