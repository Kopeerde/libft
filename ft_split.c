/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 13:00:31 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/20 14:36:02 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

static int	word_count(char const *s, char c)
{
	int	res;

	res = 0;
	if (!*s)
		return (res);
	s++;
	while (*s)
	{
		if (*s == c && *(s - 1) != c)
			res++;
		s++;
	}
	if (*(s - 1) != c)
		res++;
	return (res);
}

static char	*str_cpy(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	int		index;
	char	**res;

	res = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!s || !res)
		return (0);
	i = 0;
	j = 0;
	index = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			res[j] = str_cpy(s, index, i);
			index = -1;
			j++;
		}
		i++;
	}
	res[j] = 0;
	return (res);
}
