/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 10:51:51 by skorac            #+#    #+#             */
/*   Updated: 2018/05/21 10:51:28 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int i)
{
	if (i >= 65 && i <= 90)
		return (1);
	else if (i >= 97 && i <= 122)
		return (1);
	else
		return (0);
}
