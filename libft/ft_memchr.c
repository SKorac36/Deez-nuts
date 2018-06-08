/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:31:15 by skorac            #+#    #+#             */
/*   Updated: 2018/06/08 14:06:04 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	c1;
	size_t			i;

	s = (unsigned char *)str;
	c1 = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (s[i] == c1)
			return (s + i);
		i++;
	}
	return (NULL);
}
