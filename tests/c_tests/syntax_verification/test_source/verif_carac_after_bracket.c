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
** patern /([*%/)]/
*/

int	verif_carac_after_open_parent(char *str)
{
	if (*str == OPS[OP_OPEN_PARENT_IDX])
		if (is_high_op(*(str + 1)) && *(str + 1) != OPS[OP_OPEN_PARENT_IDX])
			display_error(SYNTAX_ERROR_MSG);
	return (0);
}
