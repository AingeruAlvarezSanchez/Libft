/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_doublefree.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 18:22:56 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/21 18:49:24 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/**
 * @brief attempts to free a double pointer pointed by str.
 * 
 * @param str the double pointer to free.
 * @return NULL.
 */
char	**ft_doublefree(char **str)
{
	int	i;

	if (str == NULL)
		return (str);
	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
	return (NULL);
}
