/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 13:41:44 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/17 13:59:06 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

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

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	int		j;
	int		start;

	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_doublesize(s, c) + 1));
	if (!result)
		return (NULL);
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
			start = -1;
		}
	}
	result[j] = NULL;
	return (result);
}
