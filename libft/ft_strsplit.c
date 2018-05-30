/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:32:59 by skorac            #+#    #+#             */
/*   Updated: 2018/05/30 12:50:36 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strsplit(const char *str, char c)
{
	int i;
	int j;
	char *s = NULL;
	
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{	
			ft_putchar(str[i]);
			j++;
			s = ft_strsub(str, i, j);	
		}
		i++;
	}
	s = ft_strsub(str, i , j);
	i = 0;
	while (i < j)
	{
		s[i] = str[j];
		i++;
	}
	s[i] = '\0';
	ft_putstr(s);
}
int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_strsplit(argv[1], '*');
	}
	ft_putchar('\n');
	return (0);
}
