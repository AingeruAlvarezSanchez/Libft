/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flags.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalvarez <aalvarez@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 23:29:00 by aalvarez          #+#    #+#             */
/*   Updated: 2024/06/28 22:29:18 by aalvarez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLAGS_H
# define FLAGS_H
# include <stdint.h>

// This header file provides a standardized implementation for parameter
// handling operations.
// It is designed to be self-contained, allowing easy integration into various
// projects without dependencies on other files.

// Number of ascii characters between '9' and 'A'.
# define UPPER_CASE_OFFSET 7

// Number of ascii characters between '9' and 'a'.
# define LOWER_CASE_OFFSET 13

// Intended to be used as an index array for the "SET_OTHER_FLAG" macro.
# define OTHER_FLAGS_INDEXES   "012"
// Number of bits added to the index of the "OTHER_FLAGS_INDEXES" to determine
// the corresponding bit position in the bitset.
# define OTHER_FLAGS_OFFSET 14

typedef struct s_program_params
{
	// 64 bit bitset to manage program flags.
	// Available bits range from 0 to 9, then A to Z, then a to z and finally 3
	// wildcard bits for user defined options.
	uint64_t	flags;
}	t_program_params;

// This set of functions sets the appropriate bits on the bitset to identify
// the program options selected by the user.
void	set_numeric_flag(const char opt, t_program_params *program_params)
		__attribute__ ((unused));

void	set_upper_flag(const char opt, t_program_params *program_params)
		__attribute__ ((unused));

void	set_lower_flag(const char opt, t_program_params *program_params)
		__attribute__ ((unused));

void	set_other_flag(const char opt, t_program_params *program_params)
		__attribute__ ((unused));

// Checks if a certain flag identified by its index on the bitset was set to
// true.
int		is_set_flag(char flag, const t_program_params program_params)
		__attribute__ ((unused));

#endif //FLAGS_H
