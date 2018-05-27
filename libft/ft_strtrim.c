/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:37:38 by skorac            #+#    #+#             */
/*   Updated: 2018/05/26 12:15:18 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	size_t size;
	char	*ret;

	if (s == NULL)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	while (s[len - 1]  == '\n' || s[len - 1] == '\t' || s[len - 1] == ' ')
		len--;
	while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
		i++;
	size = len - i;
	ret = (char *)malloc(sizeof(ret) *((size) * (size) + 1));
	while (i < len) 
	{
		ret[i] = s[i];
		i++;
	}
	ret[ft_strlen(ret)] = '\0';
	return (ret);
}
