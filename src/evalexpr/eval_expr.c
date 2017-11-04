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
	bool	next_is_op = false;
	stack_elem_t	*op;
	stack_elem_t	*nbr;

	while (*str) {
		// if (is_bracket(*str)) {
		// 	if (*str == OPS[OP_OPEN_PARENT_IDX])
		// 		next_is_op = false;
		// 	else
		// 		next_is_op = true;
		// 	op = get_elem_op(&str);
		// 	add_op(op);
		// }
		/*else */if (!next_is_op) {
			next_is_op = true;
			nbr = get_elem_nbr(&str);
			add_nb(nbr);
		}
		else {
			next_is_op = false;
			op = get_elem_op(&str);
			compute_priority(op);
		}
	}
	compute();
//	printf("%s %s %s", STACK_NB->next->value, STACK_OP->value, STACK_NB->value);
	printf("res : %c%s\n", STACK_NB->sign, STACK_NB->value);
	return ("ok");
}
