/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfile_size.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:40:29 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/21 18:19:41 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

/**
 * @brief checks the number of lines a valid file has, giving an invalid file
 * descriptor to this function may result in undefined behaviour.
 * 
 * @param fd the file descriptor to evaluate.
 * @return int the number of lines the content of the file descriptor has.
 */
int	ft_getfile_size(int fd)
{
	char	character;
	int		size;

	size = 0;
	while (read(fd, &character, 1))
	{
		if (character == '\n')
			size++;
	}
	return (size);
}
