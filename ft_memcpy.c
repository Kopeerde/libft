/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:21:35 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/18 14:41:53 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes 3 parameters a void * type destination, a void * source
 * and a size n.
 * It then copy the memory of the source to the destination up to n bytes.
 * The returned value is a pointer to the destination.
 */
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*res_dest;
	unsigned char	*res_src;

	i = 0;
	res_dest = (unsigned char *)dest;
	res_src = (unsigned char *)src;
	while (i < n)
	{
		*res_dest = *res_src;
		res_dest++;
		res_src++;
		i++;
	}
	return (dest);
}
