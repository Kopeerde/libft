/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 13:54:26 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/20 18:19:53 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes two parameters, a string and a char as an integer.
 * It will then return a pointer towrd the last time the character appear
 * in the string. If the character is not found, it will return a NULL pointer.
 * >>> ft_strchr("Hello World", 'o')
 * "orld"
 * >>> ft_strchr("Hello World", '\0')
 * ""
 * >>> ft_strchr("Hello World", 'k')
 * (NULL)
*/
char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = (char *)s + (ft_strlen(s));
	while (res != s)
	{
		if (*res == (unsigned char) c)
			return (res);
		res--;
	}
	if (*res == (unsigned char) c)
		return (res);
	return (NULL);
}
