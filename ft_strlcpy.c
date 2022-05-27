/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 22:35:37 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/10 11:46:00 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes 3 parameters, a destination string, a source string and
 * the size of the destination.
 * It then copy the source into the destination up to size - 1 and ensure that
 * the string is null-terminated.
 * If the source is smaller than the destination, it fills the blank space with
 * null characters.
 * The returned value is the size that the function was able to fill into the
 * destination (generally, it send the size back.).
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
	{
		while (src[i])
			i++;
		return (i);
	}
	while (src[i] && i < size - 1)
	{
		dst[i] = (unsigned char) src[i];
		i++;
	}
	dst[i] = '\0';
	while (src[i])
		i++;
	return (i);
}
