/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:06:54 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/18 09:46:29 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_isdigit takes an integer as parameter and return an integer
 * depending on if the input is a number in the ascii table,
 * 1 if the input correspond to a number
 * 0 if not
 * >>> ft_isdigit('A')
 * 0
 * >>> ft_isdigit('î')
 * 0
 * >>> ft_isdigit('7')
 * 1
*/
int	ft_isdigit(char c)
{
	return ((c >= 48) && (c <= 57));
}
