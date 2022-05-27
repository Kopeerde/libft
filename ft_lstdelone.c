/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 13:28:12 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/20 17:40:32 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes an element of a chianed list and a delete function as
 * 		parameter. Then remove the list to the chain.
*/
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del((*lst).content);
	free(lst);
}
