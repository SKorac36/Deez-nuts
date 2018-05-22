/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:11:58 by skorac            #+#    #+#             */
/*   Updated: 2018/05/22 14:53:09 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char *ft_strrchr(const char *str, int c)
{
	int i;
	int j;
	char *s;
	
	i = 0;	
  	while (str[i] != '\0')
		i++;
	s = (char *)str;
	while (s[i] != c)
		i--;	
	j = i;
	while (s[j] != '\0')
	{
		s[j] = str[j];
		j++;
		return(s);	
	}	

	return(NULL);

}

int main () 
{
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;
   char *sup;

   sup = strrchr(str, ch);
   ret = ft_strrchr(str, ch);

	printf("String after |%c| is - |%s|\n", ch, sup);
   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}

