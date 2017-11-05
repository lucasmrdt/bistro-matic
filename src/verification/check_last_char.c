/*
** EPITECH PROJECT, 2017
** verif last carac
** File description:
** verif last carac
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

/*
** Check if the last char is an operator.
** If yes, return the SYNTAX_ERROR_MSG.
*/
int	check_last_char(char c)
{
	if (is_high_op(c) && c != OPS[OP_CLOSE_PARENT_IDX])
		display_error(SYNTAX_ERROR_MSG);
	return (0);
}
