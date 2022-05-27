/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 14:28:30 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/11 17:12:27 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes a string as parameter and return a duplicate of the string
 * in a new variable while keeping the original untouched.
 */
char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	size;
	size_t	i;

	size = ft_strlen(s);
	dest = malloc(sizeof(char) * (size + 1));
	i = 0;
	if (!dest)
		return (NULL);
	while (s[i])
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
