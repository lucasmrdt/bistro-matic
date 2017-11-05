/*
** EPITECH PROJECT, 2017
** verif parentheses number
** File description:
** check if the char after a parenthese is an operator or a number
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

int check_digit_after_bracket(char *str)
{
	if (*str == OPS[OP_CLOSE_PARENT_IDX])
		if (is_nbr(*(str + 1)))
			display_error(SYNTAX_ERROR_MSG);
	return (0);
}
