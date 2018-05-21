/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:49:49 by skorac            #+#    #+#             */
/*   Updated: 2018/05/21 09:33:08 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
char	*ft_strstr(char *lrg, char *sml)
{
	char *str;
	int		i;
	int		j;

	str = (char*)lrg;
	i = 0;
	j = 0;
	if (sml[j] == '\0')
		return(str);
	while (str[i] != '\0')
	{
		if (str[i] == sml[j] && sml[j] != '\0')
		{ 
			while (str[i] == sml[j])
			{
				if (sml[j] != '\0')
				{
					i++;
					j++;
				}
			}
			if (sml[j] == '\0')
				return (&str[i - j]);
			else
				i++;   
		}
	}
	return(NULL);
}

int main(int argc, char **argv)
{
	if (argc == 3)
	{
	//	ft_putstr(argv[1]);
	//	write(1, "\n", 1);
	//	ft_putstr(argv[2]);
	//	write(1, "\n" ,1);
		ft_putstr(ft_strstr(argv[1], argv[2]));
	}
	write(1, "\n", 1);
	return (0);
}
