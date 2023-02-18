/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:01:09 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/17 20:04:42 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief uses recursivity to write the number n
 * (casted to unsigned int) in a fd byte by byte.
 * 
 * @param n integer to write.
 * @param fd fd to be written.
 */
static void	ft_putdigit_fd(unsigned int n, int fd)
{
	if (n > 9)
	{
		ft_putdigit_fd(n / 10, fd);
		ft_putdigit_fd(n % 10, fd);
	}
	else
	{
		n += '0';
		write(fd, &n, 1);
	}
}

/**
 * @brief writes a number on a fd.
 * 
 * @param n integer to write.
 * @param fd fd to be written.
 */
void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		n *= -1;
		write(fd, "-", 1);
		ft_putdigit_fd(n, fd);
	}
	else
		ft_putdigit_fd(n, fd);
}
