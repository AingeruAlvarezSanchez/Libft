/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 11:57:42 by aalvarez          #+#    #+#             */
/*   Updated: 2024/01/05 12:26:52 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_ulltoa_base(unsigned long long n, int base)
{
	int					len;
	char				*result;
	char				*lookup;
	unsigned long long	tmp;

	tmp = n;
	len = 0;
	lookup = "0123456789abcdefghijklmnopqrstuvwxyz";
	if (n == 0)
		return (ft_strdup("0"));
	while (tmp != 0)
	{
		tmp /= (unsigned long) base;
		++len;
	}
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	result[len] = '\0';
	while (--len >= 0)
	{
		result[len] = lookup[n % base];
		n /= base;
	}
	return (result);
}
