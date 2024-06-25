/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:48:59 by aalvarez          #+#    #+#             */
/*   Updated: 2024/06/20 20:30:15 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	copy_len;

	src_len = ft_strlen(src);
	if (size > 0)
	{
		if (src_len >= size)
			copy_len = size - 1;
		else
			copy_len = src_len;
		ft_memmove(dst, src, copy_len);
		dst[copy_len] = '\0';
	}
	return (src_len);
}
