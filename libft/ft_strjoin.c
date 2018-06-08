/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 09:38:31 by skorac            #+#    #+#             */
/*   Updated: 2018/06/08 14:28:35 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	a;
	size_t	b;

	a = ft_strlen(s1) + ft_strlen(s2);
	b = 0;
	ret = (char *)malloc(sizeof(*ret) * (a + 1));
	if (ret == NULL)
		return (NULL);
	ft_strcpy(ret, (char *)s1);
	ft_strcat(ret, (char *)s2);
	return (ret);
}
