/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublestrdup.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:21:54 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/21 18:27:50 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief attempts to duplicate the double pointer pointed by str to a new
 * allocated double pointer.
 * 
 * @param str the double pointer to be duplicated.
 * @return char** the allocated new double pointer or NULL if the allocation
 * failed or str was nonexisting.
 */
char	**ft_doublestrdup(const char **str)
{
	char	**result;
	int		i;

	if (!str)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_doublestrlen(str) + 1));
	if (!result)
		return (NULL);
	i = -1;
	while (str[++i])
		result[i] = ft_strdup(str[i]);
	result[i] = 0;
	return (result);
}
