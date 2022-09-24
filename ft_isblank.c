/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isblank.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 15:36:29 by becastro          #+#    #+#             */
/*   Updated: 2022/09/24 13:41:17 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief
 * Takes an unsigned char as string an returns (1) if is blank or (0) if is not
 * @param c
 * @return int
 */
int	ft_isblank(unsigned char c)
{
	if ((c == ' ' || c == '\t' || c == '\f'
			|| c == '\r' || c == '\n' || c == '\v'))
		return (1);
	return (0);
}
