/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:10:20 by skorac            #+#    #+#             */
/*   Updated: 2018/05/21 09:26:17 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int i)
{
	char *str;
	str = (char *)s;
	
	while (*str != i)
	{
		if (*str == '\0')
			return (NULL);
		str--;
	}
	return (str);
}

int		main()
{
	const char str[] = "hello";
	write(1, ft_strrchr(str, 108), 1);
	write(1, "\n", 1);
	return(0);
}
