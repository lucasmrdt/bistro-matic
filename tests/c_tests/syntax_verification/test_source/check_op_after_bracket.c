/*
** EPITECH PROJECT, 2017
** veriftest "(" and ops
** File description:
** verift "(" and ops
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

int	check_op_after_open_bracket(char *str)
{
	if (*str == OPS[OP_OPEN_PARENT_IDX])
		if (is_high_op(*(str + 1)) && *(str + 1) != OPS[OP_OPEN_PARENT_IDX])
			return (84);
	return (0);
}
