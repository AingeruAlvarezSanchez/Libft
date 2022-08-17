/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:01:09 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/17 19:10:18 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

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
