/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 12:50:13 by skorac            #+#    #+#             */
/*   Updated: 2018/05/31 14:10:25 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*strtrim(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	len;
	char	*ret;

	i = 0;
	j = 0;
	len = ft_strlen(s);
	while (s[len - 1] == c)
		len--;
	while (s[i] == c)
		i++;
	if (len < i)
		return (NULL);
	else
		ret = (char *)malloc(sizeof(ret) * (len - i));
	while (i < len)
	{
		ret[j] = s[i];
		j++;
		i++;
	}
	ret[j] = '\0';
	return (ret);
}

size_t find_next(char const *s, char c)
{
	size_t i;

	i = 0;
	while (s[i] != c)
		i++;
	return (i);
}

char	*extract(char const *s, char c, size_t n)
{
	size_t i;
	size_t j;
	char *ret;

	i = find_next(s, c);
	j = 0;
	while (i < n)
		i++;
	ret  = (char *)malloc(sizeof(ret) * (i + 1));
	while (j < i)
	{
		ret[j] = s[j];
		j++;	
	}
	ret[j] = '\0';
	return (ret);
}

size_t	numwords(char const *s, char c)
{
	size_t	count;
	size_t	sep;

	sep = 0;
	count = 0;
	while (*s != '\0')
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

char	**ft_strsplit(char const *s, char c)
{
	char **array;
	size_t i;

	i = 0;
	
	array = (char **)malloc(sizeof(char *) * numwords(s,c));
	while (i < numwords(s,c))
	{
		array[i] = extract(s, c , find_next(s, c));
		i++;
	}
	return (array);
}

int main()
{
	char *s1;
	char **arr;
	int i;

	i = 0;
	s1 = "***hello**tehre**hejejl";
	arr = ft_strsplit(s1, '*');
	ft_putnbr(numwords(s1, '*'));
	while (arr[i])
	{
		ft_putendl(arr[i]);
		i++;
	}
	return (0);
}
