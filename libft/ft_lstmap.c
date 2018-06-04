/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skorac <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 11:49:48 by skorac            #+#    #+#             */
/*   Updated: 2018/06/04 12:42:51 by skorac           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *res;
	t_list *hea;
	t_list *new;

	if (lst == NULL || f == NULL)
		return (NULL);
	new = f(lst);
	res = ft_lstnew(new->content, new->content_size);
	if (!res)
		return (NULL);
	hea = res;
	while (lst)
	{
		new = f(res);
		if (!res->next)
			return (NULL);
		res = res->next;
		lst = lst->next;
	}
	return (hea);
}
