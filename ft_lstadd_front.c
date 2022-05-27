/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kopeerde <kopeerde@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 09:22:29 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/11 22:47:23 by kopeerde         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Function that add a new list to a chained list
 * /!\ The new object is added at the top of the list stack
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{	
	if (!lst)
		return ;
	(*new).next = *lst;
	*lst = new;
}
