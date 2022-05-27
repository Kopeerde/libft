/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:31:14 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/10 17:00:55 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes a string and a pointer to mutator function as parameter
 * that returns a char type.
 * It then applies the mutator to each character of the string and store the
 * result inside a newly allocated string on the heap, while keeping the
 * original string untouched.
 * It then returns a pointer to the newly generated string.
 */
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	size;
	int		i;

	size = ft_strlen(s);
	i = 0;
	res = ft_calloc(size + 1, sizeof(char));
	if (!res)
		return (NULL);
	while (*s)
	{
		res[i] = f(i, *s);
		s++;
		i++;
	}
	res[i] = '\0';
	return (res);
}
