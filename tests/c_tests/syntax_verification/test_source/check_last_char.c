/*
** EPITECH PROJECT, 2017
** verif last carac
** File description:
** verif last carac
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

int	check_last_char(char c)
{
	if (is_op(c) && c != OPS[OP_CLOSE_PARENT_IDX])
		return (84);
	return (0);
}
