/*
** EPITECH PROJECT, 2017
** veriftest "(" and ops
** File description:
** verift "(" and ops
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

/*
** Check if it is an operator just after a bracket.
** If no, return the SYNTAXE_ERROR_MSG.
*/
int	check_op_after_open_bracket(char *str)
{
	if (*str == OPS[OP_OPEN_PARENT_IDX])
		if (is_high_op(*(str + 1)) && *(str + 1) != OPS[OP_OPEN_PARENT_IDX])
			display_error(SYNTAX_ERROR_MSG);
	return (0);
}
