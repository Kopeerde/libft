/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kopeerde <kopeerde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:28:47 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/23 00:42:38 by kopeerde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*temp;
	t_list	*res;

	if (!lst || !f || !del)
		return (NULL);
	temp = ft_lstnew(f((*lst).content));
	if (!temp)
		return (NULL);
	res = temp;
	lst = (*lst).next;
	while (lst)
	{
		(*temp).next = ft_lstnew(f((*lst).content));
		if (!(*temp).next)
		{
			ft_lstclear(&res, del);
			return (NULL);
		}
		temp = (*temp).next;
		lst = (*lst).next;
	}
	return (res);
}
