/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:44:46 by skorac            #+#    #+#             */
/*   Updated: 2018/05/21 09:53:45 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

char 	*ft_strdup(char *src)
{
	int i;
	int len;
	char *str;

	i = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	str = (char *)malloc(sizeof(*str) *(len + 1));
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	return(str);
}

int		main()
{
	char str[] = "hello";
	write(1, &str, 6);
	return (0);
}
