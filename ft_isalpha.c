/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 12:37:59 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/18 09:45:44 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * The function ft_isalpha takes an integer as parameter and return an integer
 * depending on if the input is a character in the ascii table,
 * 1 if the input correspond to a character
 * 0 if not
 * >>> ft_isalpha('A')
 * 1
 * >>> ft_isalpha('î')
 * 0
*/
int	ft_isalpha(int c)
{
	return (((c >= 65) && (c <= 90))
		|| (c >= 97 && c <= 122));
}
