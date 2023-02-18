/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_size.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josesanc <josesanc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:40:18 by josesanc          #+#    #+#             */
/*   Updated: 2023/02/18 19:40:18 by josesanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Returns the size of nodes at the tree
 * 
 * @param root 
 * @return int 
 */
int	ft_btree_size(t_btree *root)
{
	if (root == NULL)
		return (0);
	else
		return (1 + ft_btree_size(root->left) + ft_btree_size(root->right));
}
