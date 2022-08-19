/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:07:55 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/19 22:20:46 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copies n bytes from memory area src to memory area dest.  The memory 
 * areas may overlap: copying takes place as though the bytes in src are first
 * copied into a temporary array that does not overlap src or dest, and the bytes
 * are then copied from the temporary array to dest.
 * 
 * @param dst the string that will receive the copy.
 * @param src the string to copy.
 * @param len the max len to copy.
 * @return void* pointer to dst.
 */
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (dst && src)
	{
		if (dst > src)
		{
			while (len--)
				((unsigned char *)dst)[len] = ((const unsigned char *)src)[len];
		}
		else
		{
			while (++i < len)
				((unsigned char *)dst)[i] = ((const unsigned char *)src)[i];
		}
		return (dst);
	}
	return (NULL);
}
