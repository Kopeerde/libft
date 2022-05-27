/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 09:35:31 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/10 11:08:45 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function takes two strings and a size as parameter.
 * It compares both string from s=the start to size.
 * The returned value is the difference between both strings in the ascii table
 * or 0 if both string are identical up to n characters.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n && *s1 && *s2)
	{
		if ((unsigned char) *s1 != (unsigned char) *s2)
			break ;
		i++;
		if (i < n)
		{
			s1++;
			s2++;
		}
	}
	return ((unsigned char) *s1 - (unsigned char) *s2);
}
