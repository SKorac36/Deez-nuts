/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 12:34:06 by skorac            #+#    #+#             */
/*   Updated: 2018/05/21 14:32:43 by skorac           ###   ########.fr       */
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
char	*ft_strdup(char *src);			//
char 	*ft_strcpy(char *S1, char *s2);	//
char	*ft_strcat(char *dest, char *src); //
char	*ft_strchr(const char *s, int i); //
char	*ft_strstr(char *lrg, char *sml);	//
int		ft_isdigit(int i);				//
int		ft_isalpha(int i);				//
int		ft_isalnum(int i);				//
int		ft_isascii(int i);				//
int		ft_isprint(int i);				//
void		ft_putchar(char c);			//
void		ft_putnbr(char c);			//
void		ft_putstr(char *str);		//
void		ft_strclr(char *str);		//
int		ft_tolower(int i);				//
int		ft_toupper(int i);				//

#endif
