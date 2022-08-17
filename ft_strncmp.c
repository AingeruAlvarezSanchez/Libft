/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 00:27:45 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/17 20:27:25 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief takes to strings and compares at most n - 1 bytes.
 * 
 * @param s1 the first string to be compared.
 * @param s2 the second string to be compared.
 * @param n the maximum size to be compared.
 * @return int the difference between the two first differing bytes.
 */
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;

	if (n == 0)
		return (0);
	i = -1;
	while (((unsigned char)s1[++i] || (unsigned char)s2[i]) && i < n - 1)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
