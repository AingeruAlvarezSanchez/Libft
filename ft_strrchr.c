/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 19:18:03 by aalvarez          #+#    #+#             */
/*   Updated: 2024/06/21 13:20:23 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

char	*ft_strrchr(const char *s, int c)
{
	const char	*s_cpy;

	s_cpy = s + ft_strlen(s);
	while (s_cpy >= s)
	{
		if (*s_cpy == (char)c)
			return ((char *)s_cpy);
		s_cpy--;
	}
	return (NULL);
}
