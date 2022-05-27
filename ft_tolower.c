/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 16:15:16 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/09 12:39:22 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_tolower takes an int as parameter and if it falls into the
 * lower character category in the basic ascii table, change it into it's lower
 * value.
 * >>> ft_tolower(a)
 * a
 * >>> ft_tolower(A)
 * a
 * >>> ft_tolower({)
 * {
*/
int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
		c += 32;
	return (c);
}
