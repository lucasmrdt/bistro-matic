/*
** EPITECH PROJECT, 2017
** verif_syntax.c
** File description:
** verif syntax
*/

#include <stdlib.h>
#include <stdbool.h>
#include "my.h"
#include "bistromatic.h"

/*
** patern : /[+-%/*(])/
*/

bool	verif_bracket_after_op(char *str)
{
	if (!is_op(*str) && *str != OPS[OP_CLOSE_PARENT_IDX])
		return (0);
	if (*(str + 1) == OPS[OP_CLOSE_PARENT_IDX])
		display_error(SYNTAX_ERROR_MSG);
	return (0);
}
