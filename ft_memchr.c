/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:09:58 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/20 17:58:48 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes 3 parameters, a string, a character (as an int) and
 * a max length to search.
 * It returns a pointer to the string toward the first character specified
 * encountered or return NULL if either the character doesn't exist or if the
 * max length search is 0.
 * >>> ft_memchr("Hello World", 'l', 4)
 * "llo World"
 * >>> ft_memchr("hello World", 'o', 4)
 * (NULL)
*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*string;

	i = 0;
	string = (unsigned char *) s;
	while (i < n)
	{
		if (*string == (unsigned char) c)
			return (string);
		string++;
		i++;
	}
	return (NULL);
}
