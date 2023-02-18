/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 03:37:17 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/19 22:19:28 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief searches for the string pointed by set on the start and the end of
 * the string pointed by s1 and returns an allocation of a new string without
 * the set characters in the string s1.
 * 
 * @param s1 the string to be searched.
 * @param set the string to search.
 * @return char* the allocation result of the trimming.
 */
char	*ft_strtrim(const char *s1, const char *set)
{
	char	*result;
	int		i;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	i = ft_strlen(s1);
	while (i && ft_strchr(set, s1[i]))
		i--;
	result = ft_substr((char *)s1, 0, (i + 1));
	return (result);
}
