/*
** EPITECH PROJECT, 2017
** check_digit_before_bracket
** File description:
** file
*/

#include "bistromatic.h"
#include "my.h"

int	check_digit_before_bracket(char *str)
{
	if (*str != OPS[OP_OPEN_PARENT_IDX])
		if (is_nbr(*(str - 1)))
			display_error(SYNTAX_ERROR_MSG);
	return (0);
}
