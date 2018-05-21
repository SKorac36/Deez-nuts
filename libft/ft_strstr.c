/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:49:49 by skorac            #+#    #+#             */
/*   Updated: 2018/05/21 14:32:51 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *lrg, char *sml)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (sml[j] == '\0')
		return (lrg);
	while (lrg[i] != '\0')
	{
		if (lrg[i] == sml[j] && sml[j] != '\0')
		{
			while (lrg[i] == sml[j])
			{
				if (sml[j] != '\0')
				{
					j++;
					i++;
				}
			}
			if (sml[j] == '\0')
				return (lrg + (i - j));
		}
		i++;
	}
	return (NULL);
}
