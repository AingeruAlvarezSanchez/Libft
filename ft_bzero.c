/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:25:53 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/17 23:28:36 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief fills n bytes of the s string with NULL bytes.
 * 
 * @param s string to be filled.
 * @param n number of bytes to fill.
 */
void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = -1;
	if (s)
	{
		while (++i < n)
			((unsigned char *)s)[i] = 0;
	}
}
