/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 13:15:21 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/18 09:45:20 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_isalpha takes an integer as parameter and return an integer
 * depending on if the input is a character or a number in the ascii table,
 * 1 if the input correspond to a character or an integer
 * 0 if not
 * >>> ft_isalnum('A')
 * 1
 * >>>ft_isalnum('2')
 * 1
 * >>> ft_isalnum('î')
 * 0
*/
int	ft_isalnum(int c)
{
	return ((((c >= 48) && (c <= 57))
			|| ((c >= 65) && (c <= 90))
			|| ((c >= 97) && (c <= 122))));
}
