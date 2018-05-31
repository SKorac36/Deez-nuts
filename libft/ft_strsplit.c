/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strplit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:32:59 by skorac            #+#    #+#             */
/*   Updated: 2018/05/31 12:14:57 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	getstart(const char *str, char c)
{
	size_t i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
			return(i);
		i++;
	}
	return (i);
}

size_t	getend(const char *str, char c)
{
	size_t	i;

	i = getstart(str, c ) ;
	while (str[i] != c && str[i] != '\0')
		i++;
	return (i - getstart(str , c) );
}

void	ft_strsplit(const char *str, char c)
{
	size_t s;
	size_t e;
	size_t count;
	char *ret;

	count = 0;
	
	s = getstart(str, c);
	e = getend(str, c);
	ret = ft_strsub(str, s, e);	
	if (ret != NULL)
		count++;
	ft_putendl(ret);
	ft_putnbr(count);
	ft_strclr(ret);
}

int	main()
{
	char *s = "******hello****jehrthj";

	ft_strsplit(s, '*');
	return (0);
}

