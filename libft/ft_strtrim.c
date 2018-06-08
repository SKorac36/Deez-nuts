/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 10:37:38 by skorac            #+#    #+#             */
/*   Updated: 2018/06/08 09:42:58 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*ret;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	while (s[len - 1] == '\n' || s[len - 1] == '\t' || s[len - 1] == ' ')
		len--;
	while (s[i] == '\n' || s[i] == '\t' || s[i] == ' ')
		i++;
	if (len < i)
		return ("");
	else if (!(ret = (char *)malloc(sizeof(ret) * (len))))
		return (NULL);
	while (i < len)
	{
		ret[j] = s[i];
		j++;
		i++;
	}
	ret[j] = '\0';
	return (ret);
}
