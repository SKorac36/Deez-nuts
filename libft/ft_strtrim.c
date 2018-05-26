/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:37:38 by skorac            #+#    #+#             */
/*   Updated: 2018/05/26 11:58:42 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	len;
	char	*ret;
	if (s == NULL)
		return (NULL);
	len = ft_strlen(s);
	while (s[len - 1] == '\n' || s[len - 1] == '\t' || s[len - 1] == ' ')
		len--;
	i = -1;
	while (s[++i] == '\n' || s[i] == '\t' || s[i] == ' ')
		len--;
	if (len <= 0)
		len = 0;i
	ret = (char *)malloc(sizeof(ret) * ((len - i) + 1));
	if (ret == NULL)
		return (NULL);
	s += i;
	i = -1;
	while (++i < len)
		ret[i] == *s++;
	ret[i] = '\0';
	return (ret);
}
