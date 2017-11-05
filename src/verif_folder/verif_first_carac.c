/*
** EPITECH PROJECT, 2017
** verif_first_carac
** File description:
** verif first carac
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

int	verif_first_carac(char c)
{
	if (is_high_op && c != OPS[OP_OPEN_PARENT_IDX])
		display_error(SYNTAX_ERROR_MSG, EXIT_SYNTAX);
	return (0);
}
