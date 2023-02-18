/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:41:44 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/17 20:08:00 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief calculates the size of the double string for allocation.
 * 
 * @param s the string to be splitted.
 * @param c the splitting character.
 * @return int the number of strings needed on the double string result
 * (not counting the NULL string).
 */
static int	ft_doublesize(const char *s, char c)
{
	int		size;

	size = 0;
	while (*s)
	{
		if ((s[1] == c || !s[1]) && *s != c)
			size++;
		s++;
	}
	return (size);
}

static char	**ft_copy_words(char const *s, char c, char	**result)
{
	size_t	i;
	int		j;
	int		start;

	start = -1;
	i = -1;
	j = 0;
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if (start >= 0 && (s[i] == c || i == ft_strlen(s)))
		{
			result[j++] = ft_substr(s, start, (i - start));
			if (result[j - 1] == NULL)
			{
				ft_doublefree(result);
				errno = ENOMEM;
				return (NULL);
			}
			start = -1;
		}
	}
	result[j] = NULL;
	return (result);
}

/**
 * @brief takes the string pointed by s and creates a double
 * array splitted by the character c (wich is eliminated).
 * 
 * @param s the string to split.
 * @param c the splitting character.
 * @return char** the resultant allocation of the splitted
 * string pointed by s.
 */
char	**ft_split(char const *s, char c)
{
	char	**result;

	if (s == NULL)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_doublesize(s, c) + 1));
	if (result == NULL)
		return (NULL);
	return (ft_copy_words(s, c, result));
}
