/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 18:30:13 by aalvarez          #+#    #+#             */
/*   Updated: 2022/08/17 18:43:56 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_arrsize(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n)
	{
		size++;
		n /= 10;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		size;
	long	nbr;

	size = ft_arrsize(n);
	nbr = n;
	result = malloc(sizeof(char) * (size + 1));
	if (!result)
		return (NULL);
	if (nbr < 0)
	{
		result[0] = '-';
		nbr *= -1;
	}
	if (!nbr)
		result[0] = '0';
	result[size--] = 0;
	while (nbr)
	{
		result[size--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (result);
}
