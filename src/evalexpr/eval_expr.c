/*
** EPITECH PROJECT, 2017
** evalexpr
** File description:
** file
*/

#include <stdlib.h>
#include "bistromatic.h"

char	*eval_expr(char *str)
{
	bool	wanted_char_is_op = false;
	stack_elem_t	*op;
	stack_elem_t	*nbr;

	while (*str) {
		if (is_bracket(*str)) {
			if (*str == OPS[OP_OPEN_PARENT_IDX])
				wanted_char_is_op = false;
			else
				wanted_char_is_op = true;
			op = get_elem_op(&str);
			add_op(op);
		}
		else if (!wanted_char_is_op) {
			nbr = get_elem_nbr(&str);
			add_nb(nbr);
		}
		else {
			op = get_elem_op(&str);
			add_op(op);
		}
	}
}
