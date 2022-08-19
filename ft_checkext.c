/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkext.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 23:09:32 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/19 23:21:55 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_checkext(const char *str, const char *ext)
{
	if (!ft_strrchr(str, '.')
		|| ft_strncmp(ft_strrchr(str, '.'), ext, ft_strlen(str)))
		return (1);
	return (0);
}
