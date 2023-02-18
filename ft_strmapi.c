/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:45:31 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/19 22:15:11 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief iterates over the string pointed by s and creates a new string result
 * of aplying the function pointed by f to every character of s.
 * 
 * @param s the source string to iterate.
 * @param f the function used in every character of the string pointed by s.
 * @return char* the new string result of aplying the function pointed by f
 * to every character of s.
 */
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	char	*result;
	int		i;

	i = -1;
	result = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!result)
		return (NULL);
	while (s[++i])
		result[i] = f(i, s[i]);
	result[i] = 0;
	return (result);
}
