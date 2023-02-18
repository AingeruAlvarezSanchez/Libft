/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_insert_data.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josesanc <josesanc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:42:01 by josesanc          #+#    #+#             */
/*   Updated: 2023/02/18 19:42:01 by josesanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Inserts a node as a BST tree
 * 
 * @param root 
 * @param new_node 
 * @param cmpf 
 */
void	ft_btree_insert_data(t_btree **root,
	t_btree *new_node, int (*cmpf)(void *, void *))
{
	if (*root == NULL)
	{
		*root = new_node;
		return ;
	}
	if (cmpf((*root)->item, new_node->item) > 0)
		ft_btree_insert_data(&((*root)->right), new_node->item, cmpf);
	else
		ft_btree_insert_data(&((*root)->left), new_node->item, cmpf);
}
