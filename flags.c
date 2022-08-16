/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:27:13 by aalvarez          #+#    #+#             */
/*   Updated: 2024/07/03 23:30:03 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"

inline void	set_flag(const char opt, t_program_params *program_params)
{
	program_params->flags |= (__int128)1 << opt;
}

inline int	is_set_flag(const char flag, const t_program_params program_params)
{
	return (program_params.flags >> flag & 1);
}
