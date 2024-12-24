/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 23:29:00 by aalvarez          #+#    #+#             */
/*   Updated: 2024/12/30 18:50:07 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H
# include "libft.h"

// This header file provides a standardized implementation for parameter
// handling operations.
// It is designed to be self-contained, allowing easy integration into various
// projects without dependencies on other files.

typedef struct s_program_params
{
	// 128 bit bitset to manage program flags.
	// It handles single-character flags, only character from the ASCII standard
	// are allowed.
	__int128	flags;
	// Pointer to an array of strings (arguments) passed to the program.
	// It stores any additional arguments not recognized as flags.
	t_list		*args;
	// An integer representing the current status of the program.
	int			status;
}	t_program_params;

// Sets the appropriate bits on the bitset to identify the program options
// selected by the user.
void	set_flag(char opt, t_program_params *program_params);

// Checks if a certain flag identified by its index on the bitset was set to
// true.
int		is_set_flag(char flag, t_program_params program_params);

// Completely frees all allocated memory inside the program_params structure.
void	free_program_args(t_program_params *program_params);

#endif //FLAGS_H
