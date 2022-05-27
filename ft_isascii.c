/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:26:37 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/18 09:46:10 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_isascii takes an integer as parameter and return an integer
 * depending on if the input is a character in the ascii table 
 * 		(not negative char nor extented ascii table).
 * 1 if the input is in the ascii table
 * 0 if not
 * >>> ft_isascii('A')
 * 1
 * >>> ft_isascii('î')
 * 0
*/
int	ft_isascii(int c)
{
	return ((0 <= c) && (c <= 127));
}
