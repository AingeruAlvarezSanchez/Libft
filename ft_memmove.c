/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 21:07:55 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/17 19:16:26 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = -1;
	if (dst || src)
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
