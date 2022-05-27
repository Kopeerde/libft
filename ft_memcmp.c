/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 09:21:07 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/20 18:06:25 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes 3 paramteters, 2 arrays of type (void *) and a maximum
 * comparison length.
 * The memorry is compared as an (unsigned char).
 * It will returns either 0 if both memmory are same up to len-1 or the
 * difference between the characters in ascii table.
 * >>> char *str1 = "Hello World";
 * >>> char *str2 = "Hello world";
 * >>> ft_memcmp(str1, str2, 5)
 * 0
 * >>> ft_memcmp(str1, str2, 7)
 * 32
 * >>> ft_memcmp(str2, str1, 7)
 * -32
*/
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*string_s1;
	unsigned char	*string_s2;
	size_t			i;

	string_s1 = (unsigned char *)s1;
	string_s2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*string_s1 != *string_s2)
			return (*string_s1 - *string_s2);
		string_s1++;
		string_s2++;
		i++;
	}
	return (0);
}
