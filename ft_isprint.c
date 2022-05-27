/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:42:18 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/18 09:46:41 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_isprint takes an integer as parameter input and checks if
 * it falls in the printable ascii category, negative ascii and extented table
 * are not counted as printable characters.
 * >>> ft_isprint('î')
 * 0
 * >>> ft_isprint(250)
 * 0
 * >>> ft_isprint(69)
 * 1
*/
int	ft_isprint(int c)
{
	return (32 <= c && c <= 126);
}
