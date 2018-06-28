/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 08:49:25 by skorac            #+#    #+#             */
/*   Updated: 2018/06/19 11:52:38 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numwords(char const *s, char c)
{
	size_t	count;
	size_t	sep;

	sep = 0;
	count = 0;
	while (*s)
	{
		if (sep == 1 && *s == c)
			sep = 0;
		if (sep == 0 && *s != c)
		{
			sep = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static int		ft_len(char const *s, char c)
{
	int len;

	len = 0;
	while (s[len] != c && s[len])
		len++;
	return (len);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		index;
	int		word_count;

	if (s)
	{
		index = 0;
		word_count = numwords(s, c);
		array = (char **)malloc(sizeof(array) * (word_count + 1));
		if (!array)
			return (NULL);
		while (word_count--)
		{
			while (*s == c && *s)
				s++;
			array[index] = ft_strsub(s, 0, ft_len(s, c));
			if (!array)
				return (NULL);
			s += ft_len(s, c);
			index++;
		}
		array[index] = NULL;
		return (array);
	}
	return (NULL);
}
int	main()
{
	char *s;
	char **array;
	int i = 0;

	s = "***stefan**hello***gehegr**";
	array = ft_strsplit(s, '*');
	while (array[i])
	{
		ft_putendl(array[i]);
		i++;
	}
	return (0);
}
