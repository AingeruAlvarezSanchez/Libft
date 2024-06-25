/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 13:28:22 by aalvarez          #+#    #+#             */
/*   Updated: 2024/06/19 15:54:05 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_cpy;
	unsigned char		uc;

	s_cpy = (const unsigned char *)s;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*s_cpy == uc)
			return ((void *)s_cpy);
		s_cpy++;
	}
	return (NULL);
}
