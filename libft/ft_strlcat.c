/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 13:20:11 by skorac            #+#    #+#             */
/*   Updated: 2018/05/22 14:02:55 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t k;
	
 	i = 0;
	j = 0;
	k = 0;
    while (dst[i] != '\0')
        i++;
    while (src[j] != '\0' && j < size)
    {
        dst[i + j] = src[j];
        j++;
    }
    dst[i + j] = '\0';
 -   while (src[k] != '\0')
        k++;
    return (k + size);
}

int main()
{
	char dst[] = "hello";
	const char src[] = "hello";
	size_t sup = strlcat(dst, src, 4 );
	size_t  ret = ft_strlcat(dst, src, 4);
	printf("%zu\n", sup);
	printf("%zu\n", ret);
   return(0);	

}
