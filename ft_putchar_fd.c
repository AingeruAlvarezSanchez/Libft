/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:53:48 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/17 20:02:18 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief writes a character on a fd.
 * 
 * @param c character to write.
 * @param fd fd to be written.
 */
void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
