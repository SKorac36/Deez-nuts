/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 10:55:31 by skorac            #+#    #+#             */
/*   Updated: 2018/05/21 12:28:27 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int c;

	c = 0;
	if (n = 0)
		return (0);
	while (s1[c] == s2[c] && s1[c] != '\0' && c < (n - 1))
		c++;
	return (s1[c] - s2[c]);
}
