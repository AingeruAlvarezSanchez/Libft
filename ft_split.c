/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 14:33:48 by aalvarez          #+#    #+#             */
/*   Updated: 2024/06/24 02:09:01 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if ((s[1] == c || !s[1]) && *s != c)
			count++;
		s++;
	}
	return (count);
}

static char	**fill_words(const char *s, char c, size_t words)
{
	char		**result;
	const char	*start;
	size_t		i;

	result = (char **)ft_calloc(words + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (i < words)
	{
		while (*s == c)
			s++;
		start = s;
		s = ft_strchr(s, c);
		result[i] = ft_substr(start, 0, s - start);
		if (result[i] == NULL)
		{
			while (i--)
				free(result[i]);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**result;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	result = fill_words(s, c, words);
	return (result);
}
