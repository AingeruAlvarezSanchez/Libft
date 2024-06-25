/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 02:13:41 by aalvarez          #+#    #+#             */
/*   Updated: 2024/06/26 01:06:51 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>

static size_t	numlen(int n)
{
	size_t	len;

	len = n <= 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t			len;
	char			*str;
	unsigned int	num;

	len = numlen(n);
	num = n;
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (str == NULL)
		return (NULL);
	if (n < 0)
		num = -n;
	if (n < 0)
		str[0] = '-';
	while (len--)
	{
		if (str[len] == '-')
			break ;
		str[len] = num % 10 + '0';
		num /= 10;
	}
	return (str);
}
