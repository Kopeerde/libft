/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:27:33 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/20 17:39:11 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes a list in parameter and a function that aims to remove a
 * link in the chained list.
 * The function remove and free each elements of the cahined list.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (**lst).next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
}
