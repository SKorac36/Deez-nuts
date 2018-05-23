/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:11:58 by skorac            #+#    #+#             */
/*   Updated: 2018/05/23 11:22:00 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int i)
{
	char	*str;
	size_t	c;

	str = (char *)s;
	c = strlen(str);
	while (c)
	{
		if (str[c] == i)
			return (&str[c]);
		c--;
	}
	return (str);
}
