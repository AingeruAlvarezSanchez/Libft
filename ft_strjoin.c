/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/21 14:13:00 by aalvarez          #+#    #+#             */
/*   Updated: 2024/06/21 14:17:03 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined_str;
	size_t	s1_len;
	size_t	s2_len;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	joined_str = (char *)ft_calloc(s1_len + s2_len + 1, sizeof(char));
	if (joined_str == NULL)
		return (NULL);
	ft_strlcpy(joined_str, s1, s1_len + 1);
	ft_strlcat(joined_str, s2, s1_len + s2_len + 1);
	return (joined_str);
}
