/*
** EPITECH PROJECT, 2017
** verif_doublecarac.c
** File description:
** check double carac
*/

#include "my.h"
#include "bistromatic.h"
#include "stdlib.h"

int	verif_doublecarac(char *str)
{
	if (is_op(*str) && !is_bracket(*str))
		if (is_high_op(*(str + 1)) && !is_bracket(*(str + 1)))
			display_error(SYNTAX_ERROR_MSG, EXIT_SYNTAX);
	return (0);
}
