/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 22:11:44 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/19 22:13:26 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief copies up to dstsize - 1 bytes from the string pointed by src to
 * the string pointed by dst.
 * 
 * @param dst the new string.
 * @param src the string to be copied.
 * @param dstsize the size of the destination string.
 * @return size_t the size of the string to be copied.
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	if (!src || !dst)
		return (0);
	i = -1;
	if (dstsize != 0)
	{
		while (src[++i] && i < dstsize - 1)
			dst[i] = src[i];
		dst[i] = 0;
	}
	return (ft_strlen(src));
}
