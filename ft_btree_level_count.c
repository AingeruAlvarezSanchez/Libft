/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_level_count.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josesanc <josesanc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:41:55 by josesanc          #+#    #+#             */
/*   Updated: 2023/02/18 19:41:55 by josesanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Counts the largest branch of the tree
 * 
 * @param root 
 * @return int 
 */
int	ft_btree_level_count(t_btree *root)
{
	int	left_size;
	int	right_size;

	if (root == NULL)
		return (0);
	left_size = ft_btree_level_count(root->left);
	right_size = ft_btree_level_count(root->right);
	if (left_size > right_size)
		return (left_size + 1);
	else
		return (right_size + 1);
}
