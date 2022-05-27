/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmendes- <kmendes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 22:10:20 by kmendes-          #+#    #+#             */
/*   Updated: 2022/05/20 18:08:46 by kmendes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * This function just write a specified char in the specified file descriptor,
 * that were fed up to the function as parameters.
*/
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
