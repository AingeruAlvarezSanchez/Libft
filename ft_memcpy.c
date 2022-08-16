/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:31:19 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/16 21:11:37 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = -1;
	//agregar && a la condicion justo debajo para segfault arreglo
	if (dst || src)
	{
		while (++i < n)
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
	}
	return (dst);
}
