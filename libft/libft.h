/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 12:34:06 by skorac            #+#    #+#             */
/*   Updated: 2018/05/17 10:33:08 by skorac           ###   ########.fr       */
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
int		ft_isdigit(int i);				//4
int		ft_isalpha(int i);				//5
int		ft_isalnum(int i);				//6
int		ft_isascii(int i);				//7
int		ft_isprint(int i);				//8
void		ft_putchar(char c);			//9
void		ft_putnbr(char c);			//10
void		ft_putstr(char *str);		//11
void		ft_strclr(char *str);		//12
int		ft_tolower(int i);				//13
int		ft_toupper(int i);				//14

#endif
