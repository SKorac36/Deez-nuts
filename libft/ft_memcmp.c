/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 12:16:56 by skorac            #+#    #+#             */
/*   Updated: 2018/05/23 10:43:18 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char *s1;
	const unsigned char *s2;

	s1 = (const unsigned char *)str1;
	s2 = (const unsigned char *)str2;
	if (n == 0 || s1 == s2)
		return (0);
	while (n--)
	{
		if (s1 != s2)
		{
			return (s1 - s2);
		}
		if (n)
		{
			s1++;
			s2++;
		}
	}
	return (0);
}
