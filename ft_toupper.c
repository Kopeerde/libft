/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 15:40:22 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/09 12:34:11 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_toupper takes an int as parameter and if if falls into the
 * lower character category in the basic ascii table, change it into it's upper
 * value.
 * >>> ft_toupper(a)
 * A
 * >>> ft_toupper(A)
 * A
 * >>> ft_toupper({)
 * {
*/
int	ft_toupper(int c)
{
	if (97 <= c && c <= 122)
		c -= 32;
	return (c);
}
