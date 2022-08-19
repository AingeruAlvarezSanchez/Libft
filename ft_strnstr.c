/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 00:54:42 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/19 22:17:54 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief tries to find the string pointed by needle inside the string pointed
 * by haystack.
 * 
 * @param haystack the string to be searched.
 * @param needle the string to search.
 * @param len the maximun length to search.
 * @return char* the pointer to the first character of needle inside the string
 * poined by haystack.
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!*needle)
		return ((char *)haystack);
	i = -1;
	while (haystack[++i] && i < len)
	{
		if (ft_strlen(needle) + i > len)
			return (NULL);
		if (haystack[i] == needle[0] && !ft_strncmp(&haystack[i],
				needle, ft_strlen(needle)))
			return ((char *)&haystack[i]);
	}
	return (NULL);
}
