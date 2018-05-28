/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 09:54:57 by skorac            #+#    #+#             */
/*   Updated: 2018/05/28 11:10:17 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f) (char))
{
	char	*new;
	size_t	len;
	size_t	i;

	len = ft_strlen(s);
	new = ft_strnew(len);
	i = 0;
	while (s[i])
	{
		new[i] = (*f)(s[i]);
		i++;
	}
	return (new);
}
