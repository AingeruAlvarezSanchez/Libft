/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:31:19 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/19 22:11:21 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copies up to n bytes from the void pointed by src to the
 * void pointed by dst.
 * 
 * @param dst string to be filled with a copy of n bytes.
 * @param src string to copy.
 * @param n maximun number of bytes to copy.
 * @return void* a pointer to the new string resultant of the copy.
 */
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	if (dst && src)
	{
		while (++i < n)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}
