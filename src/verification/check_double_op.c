/*
** EPITECH PROJECT, 2017
** verif_doublecarac.c
** File description:
** file
*/

#include "my.h"
#include "bistromatic.h"
#include "stdlib.h"

/*
** Check two operators (only *,/ and %) follow
** each other. If yes, return the SYNTAX_ERROR_MSG.
** Examples: 1+--1 -> OK but 1**1 -> Error.
*/
int	check_double_op(char *str)
{
	if (is_op(*str) && !is_bracket(*str))
		if (is_high_op(*(str + 1)) && !is_bracket(*(str + 1)))
			display_error(SYNTAX_ERROR_MSG);
	return (0);
}
