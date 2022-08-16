/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 22:45:01 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/16 23:46:17 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
