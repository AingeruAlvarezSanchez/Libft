/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:28:08 by aalvarez          #+#    #+#             */
/*   Updated: 2024/06/26 00:32:46 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (dst == src)
		return (dst);
	if (dst < src || dst >= src + n)
		ft_memcpy(dst, src, n);
	else
	{
		while (n--)
			((unsigned char *)dst)[n] = ((unsigned char *)src)[n];
	}
	return (dst);
}
