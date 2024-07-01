/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 22:27:13 by aalvarez          #+#    #+#             */
/*   Updated: 2024/07/01 20:34:38 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "flags.h"

void	set_numeric_flag(const char opt, t_program_params *program_params)
{
	program_params->flags |= 1ul << (opt - '0');
}

void	set_upper_flag(const char opt, t_program_params *program_params)
{
	program_params->flags |= 1ul << (opt - UPPER_CASE_OFFSET - '0');
}

void	set_lower_flag(const char opt, t_program_params *program_params)
{
	program_params->flags |= 1ul << (opt - LOWER_CASE_OFFSET - '0');
}

void	set_other_flag(const char opt, t_program_params *program_params)
{
	program_params->flags |= 1ul << (opt + OTHER_FLAGS_OFFSET);
}

int	is_set_flag(char flag, const t_program_params program_params)
{
	flag -= '0';
	if (flag >= 'A' && flag <= 'Z')
		flag -= UPPER_CASE_OFFSET;
	else if (flag >= 'a' && flag <= 'z')
		flag -= LOWER_CASE_OFFSET;
	return ((program_params.flags >> flag) & 1);
}
