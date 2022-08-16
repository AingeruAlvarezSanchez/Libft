/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 00:54:42 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/17 01:03:56 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
		if (haystack[i] == needle[0] && !ft_strncmp(&haystack[i], needle, ft_strlen(needle)))
			return ((char *)&haystack[i]);
	}
	return (NULL);
}
