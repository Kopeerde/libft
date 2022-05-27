/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:18:22 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/18 11:38:57 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes 3 arguments a string, a starting index and a size.
 * It then returns a newly allocated string on the heap the contains a
 * sub-string of the original string that start from the index given as
 * parameter and with the size given as parameter.
 * The original string is kept untouched.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	string_length;
	size_t	i;

	string_length = ft_strlen(s);
	if (start > string_length)
		return (ft_calloc(1, 1));
	if ((ft_strlen(s) - start) < len)
		res = malloc(sizeof(char) * (string_length - start) + 1);
	else
		res = malloc(sizeof(char) * len + 1);
	if (!res)
		return (NULL);
	i = 0;
	while ((start + i) < string_length && i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
