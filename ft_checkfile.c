/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfile.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:34:19 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/21 18:17:45 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * @brief checks if the string pointed by file is a valid file descriptor.
 * 
 * @param file the file to be checked.
 * @return int returns 1 if the file is invalid (non existing, no reading
 * permission, etc.) or 0 if file is valid to open and read.
 */
int	ft_checkfile(const char *file)
{
	int	fd;

	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (1);
	close(fd);
	return (0);
}
