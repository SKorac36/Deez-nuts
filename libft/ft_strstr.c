/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:49:49 by skorac            #+#    #+#             */
/*   Updated: 2018/05/22 09:10:02 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i] , 1);
		i++;
	}
}
§
char	*ft_strstr(char *lrg, char *sml)
{
	int		i;
	int		j;

	i = 0;
	if (sml[0] == '\0')
		return (lrg);
	while (lrg[i] != '\0')
	{
		j = 0;
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

int		main()
{
	char *s1 = "my name is jeff";
	char *s2 = "ne";
	char *ret;
	
	ret = ft_strstr(s1, s2);
	ft_putstr(ret);
	write(1, "\n",1);
	return (0);
}
