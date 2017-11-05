/*
** EPITECH PROJECT, 2017
** verif_first_carac
** File description:
** verif first carac
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

int	check_first_char(char c)
{
	if (is_high_op(c) && c != OPS[OP_OPEN_PARENT_IDX])
		display_error(SYNTAX_ERROR_MSG);
	return (0);
}
