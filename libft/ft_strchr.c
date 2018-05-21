/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 08:45:56 by skorac            #+#    #+#             */
/*   Updated: 2018/05/21 09:34:24 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strchr(const char *s, int i)
{
	char *str;

	str = (char *)s; 
	while (*str != i)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return(str);	
}

int		main()
{
	int o = 111;
	const char str[] = "hello";
	write(1, ft_strchr(str, o), 1);
	write(1, "\n", 1);
	return (0);
}
