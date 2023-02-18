/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 01:43:23 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/17 20:28:41 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief takes a string and allocates a new string composed of len bytes from
 * the starting index start.
 * 
 * @param s the string to be substracted.
 * @param start the starting point of the substraction.
 * @param len the bytes to be substracted.
 * @return char* the allocated result of the substraction.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;

	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	s += start;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	ft_strlcpy(result, s, len + 1);
	return (result);
}
