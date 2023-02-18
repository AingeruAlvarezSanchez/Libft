/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_search_item.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: josesanc <josesanc@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:41:48 by josesanc          #+#    #+#             */
/*   Updated: 2023/02/18 19:41:48 by josesanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Searches an item and returns it if found
 * 
 * @param root 
 * @param data_ref 
 * @param cmpf 
 * @return void* 
 */
void	*ft_btree_search_item(t_btree *root,
				void *data_ref, int (*cmpf)(void *, void *))
{
	if (ft_btree_search_item(root->left, data_ref, cmpf) != NULL)
		return (ft_btree_search_item(root->left, data_ref, cmpf));
	if (cmpf(root->item, data_ref) == 0)
		return (root->item);
	if (ft_btree_search_item(root->right, data_ref, cmpf) != NULL)
		return (ft_btree_search_item(root->right, data_ref, cmpf));
	return (NULL);
}
