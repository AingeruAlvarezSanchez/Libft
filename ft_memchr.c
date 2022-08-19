/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 00:42:06 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/19 22:09:34 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief locates a character c inside the string s and returns a pointer
 * to the character inside the string s.
 * 
 * @param s locates the first occurrence of c 
 * (converted to an unsigned char) in the string pointed by s.
 * @param c the character to be located.
 * @param n max bytes to search on the string pointed by s.
 * @return void* the pointer to the byte located (or NULL if not found).
 */
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
	}
	return (NULL);
}
