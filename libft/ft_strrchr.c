/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:11:58 by skorac            #+#    #+#             */
/*   Updated: 2018/06/08 14:36:07 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int i)
{
	char	*str;
	size_t	c;

	str = NULL;
	c = 0;
	if (i == '\0')
		return ((char*)&s[ft_strlen(s)]);
	while (s[c])
	{
		if (s[c] == i)
			str = (char*)&s[c];
		c++;
	}
	return (str);
}
