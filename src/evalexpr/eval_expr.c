/*
** EPITECH PROJECT, 2017
** evalexpr
** File description:
** file
*/

#include <stdbool.h>
#include <stdlib.h>
#include "bistromatic.h"

char	*eval_expr(char *str)
{
	bool		next_is_op = false;

	while (*str) {
		if (is_bracket(*str)) {
			if (*str == OPS[OP_OPEN_PARENT_IDX])
				next_is_op = false;
			else
				next_is_op = true;
			compute_priority(get_elem_op(*str));
			str++;
		}
		else if (!next_is_op) {
			next_is_op = true;
			add_nb(get_elem_nbr(&str));
		}
		else {
			next_is_op = false;
			compute_priority(get_elem_op(*str));
			str++;
		}
	}
	while (STACK_OP->value)
		compute();
	printf("res : %c%s\n", STACK_NB->sign, STACK_NB->value);
	return ("ok");
}
