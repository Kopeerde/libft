/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 00:39:54 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/20 17:45:12 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes a chained list as parameter and return the number of
 * links the linked list have.
*/
int	ft_lstsize(t_list *lst)
{
	int	res;

	res = 0;
	if (!lst)
		return (res);
	res++;
	while ((*lst).next)
	{
		lst = (*lst).next;
		res++;
	}
	return (res);
}
