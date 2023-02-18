/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_create_node.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josesanc <josesanc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:40:22 by josesanc          #+#    #+#             */
/*   Updated: 2023/02/18 19:40:22 by josesanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Creates a new tree node with item
 * as a the content.
 * @param item 
 * @return t_btree* the new node or null if allocation failed
 */
t_btree	*btree_create_node(void *item)
{
	t_btree	*res;

	res = (t_btree *) malloc (sizeof(t_btree));
	if (res != NULL)
	{
		res->item = item;
		res->left = NULL;
		res->right = NULL;
	}
	return (res);
}
