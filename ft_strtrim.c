/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 10:50:28 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/12 14:48:10 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes a character and a string as parameters and then compare
 * if the character appears in the charset.
 * The return value is 1 if the character appear in the charset, else return 0.
 */
static int	char_set_cmp(const char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/**
 * This function takes two strings as parameters, a string and a charset.
 * The charset defines which characters are trimmed from at the start and end
 * of the original string.
 * The result is stored in a new variable while keeping the original untouched.
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	start = 0;
	end = ft_strlen(s1);
	while (char_set_cmp(s1[start], set))
		start++;
	while (char_set_cmp(s1[end - 1], set))
		end--;
	res = ft_substr(s1, start, (end - start));
	return (res);
}
