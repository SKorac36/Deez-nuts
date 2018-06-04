/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 09:44:46 by skorac            #+#    #+#             */
/*   Updated: 2018/06/04 12:58:40 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = ft_strlen(src);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	while (i < len)
	{
		str[i] = src[i];
		i++;
	}
	str[i] = '\0';
	free(str);
	return (str);
}
