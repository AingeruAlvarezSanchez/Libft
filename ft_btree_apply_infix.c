/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_apply_infix.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josesanc <josesanc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:41:14 by josesanc          #+#    #+#             */
/*   Updated: 2023/02/18 19:41:14 by josesanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Applies a function to the items of the tree
 * going from the left to the right (left, root, right)
 * on every node.
 * @param root 
 * @param applyf 
 */
void	ft_btree_apply_infix(t_btree *root, void (*applyf)(void *))
{
	if (root != NULL)
	{
		ft_btree_apply_infix(root->left, applyf);
		applyf(root->item);
		ft_btree_apply_infix(root->right, applyf);
	}
}
