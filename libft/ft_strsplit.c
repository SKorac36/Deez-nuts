/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 08:49:25 by skorac            #+#    #+#             */
/*   Updated: 2018/06/04 13:09:14 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

<<<<<<< HEAD
static size_t	numwords(char const *s, char c)
=======
size_t	numwords(char const *s, char c)
>>>>>>> 94e50af3ebde3b0f6605af37cc4fd6f5d3de4ba9
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
int	ft_len(char const *s, char c)
{
	int len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return(len);
	
}

static int		ft_len(char const *s, char c)
{
<<<<<<< HEAD
	int len;

	len = 0;
	while (s[len] != c && s[len] != '\0')
		len++;
	return (len);
=======
	char **array;
	int index;
	int word_count;

	index = 0;
	word_count = numwords(s, c);
	array = (char **)malloc(sizeof(*array) * (word_count + 1));
	while (word_count--)
	{
		while (*s == c && *s != '\0')
			s++;
		array[index] = ft_strsub(s, 0, ft_len(s,c));
		if (array[index] == NULL)
			return (NULL);
		s += ft_len(s,c);
		index++;
	}
	array[index] = NULL;
	return (array);
>>>>>>> 94e50af3ebde3b0f6605af37cc4fd6f5d3de4ba9
}

char			**ft_strsplit(char const *s, char c)
{
	char	**array;
	int		index;
	int		word_count;

<<<<<<< HEAD
	index = 0;
	word_count = numwords(s, c);
	array = (char **)malloc(sizeof(*array) * (word_count + 1));
	while (word_count--)
=======
	i = 0;
	s1 = "***hello**tehre**hejejl";
	arr = ft_strsplit(s1, '*');
	while (arr[i])
>>>>>>> 94e50af3ebde3b0f6605af37cc4fd6f5d3de4ba9
	{
		while (*s == c && *s != '\0')
			s++;
		array[index] = ft_strsub(s, 0, ft_len(s, c));
		if (array[index] == NULL)
			return (NULL);
		s += ft_len(s, c);
		index++;
	}
	array[index] = NULL;
	free(array);
	return (array);
}
