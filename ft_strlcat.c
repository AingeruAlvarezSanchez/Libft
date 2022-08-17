/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 22:45:01 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/17 20:25:08 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief appends the string pointed by src to the string pointed by dst.
 * 
 * @param dst the string to be appended.
 * @param src the string to append.
 * @param dstsize the size of dst.
 * @return size_t the len of the string that strlcat tried to create.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;

	if (dstsize == 0)
		return (ft_strlen(src));
	if (dstsize < ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
	j = 0;
	dstlen = ft_strlen(dst);
	i = ft_strlen(dst);
	while (src[j] && (dstlen + j) < dstsize)
		dst[i++] = src[j++];
	if ((dstlen + j) == dstsize && dstlen < dstsize)
		dst[i - 1] = 0;
	else
		dst[i] = 0;
	return (ft_strlen(src) + dstlen);
}
