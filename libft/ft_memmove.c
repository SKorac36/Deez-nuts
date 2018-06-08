/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 11:09:09 by skorac            #+#    #+#             */
/*   Updated: 2018/06/08 14:15:34 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)str1;
	p2 = (unsigned char *)str2;
	i = 0;
	if (str1 > str2)
	{
		while (n--)
			p1[n] = p2[n];
	}
	else
	{
		while (i < n)
		{
			p1[i] = p2[i];
			i++;
		}
	}
	return (p1);
}
