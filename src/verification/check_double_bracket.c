/*
** EPITECH PROJECT, 2017
** check_double_bracket
** File description:
** file
*/

#include "bistromatic.h"

int	check_double_bracket(char *str)
{
	if (*str == OPS[OP_CLOSE_PARENT_IDX] &&
		*(str + 1) == OPS[OP_OPEN_PARENT_IDX])
		display_error(SYNTAX_ERROR_MSG);
	return (0);
}