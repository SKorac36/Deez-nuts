/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/16 12:18:09 by skorac            #+#    #+#             */
/*   Updated: 2018/05/23 10:27:56 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int i)
{
	if (ft_isdigit(i) == 1 || ft_isalpha(i) == 1)
		return (1);
	else
		return (0);
}
