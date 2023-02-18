/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_prefix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josesanc <josesanc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:40:25 by josesanc          #+#    #+#             */
/*   Updated: 2023/02/18 19:40:25 by josesanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to the items of the tree
 * first to the root, and then, to the children (root, left, right)
 * on every node.
 * @param root 
 * @param applyf 
 */
void	ft_btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		applyf(root->item);
		ft_btree_apply_prefix(root->left, applyf);
		ft_btree_apply_prefix(root->right, applyf);
	}
}
