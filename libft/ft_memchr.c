/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:31:15 by skorac            #+#    #+#             */
/*   Updated: 2018/05/23 10:36:03 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	cee;
	size_t			i;

	s = (unsigned char *)str;
	cee = (unsigned char)c;
	i = 0;
	while (n--)
	{
		if (s[i] == cee)
			return (s + i);
		i++;
	}
	return (NULL);
}
