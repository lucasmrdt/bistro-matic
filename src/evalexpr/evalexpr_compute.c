/*
** EPITECH PROJECT, 2017
** evalexpr_compute
** File description:
** file
*/

#include "bistromatic.h"

void	compute_priority(stack_elem_t *elem)
{
	void	*tmp;

	if (*(elem->value) == OPS[OP_OPEN_PARENT_IDX]) {
		while (*(STACK_OP->value) != OPS[OP_CLOSE_PARENT_IDX])
			compute();
		next_op();
	}
	else {
		while (elem->weight <= STACK_OP->weight && STACK_OP->weight != 3)
			compute();
		add_op(elem);
	}
}

void	compute(void)
{
	stack_elem_t	*elem1;
	stack_elem_t	*elem2;
	char		*result;
	char		sign;
	int		i = -1;

	elem1 = STACK_NB;
	elem2 = STACK_NB->next;
	while (OPS[++i] != *(STACK_OP->value));
	set_bigger_first(&elem1, &elem2);
	result = (COMPUTE_ARR[i - 2])(elem1, elem2, &sign);
	free(elem2->value);
	elem2->value = (COMPUTE_ARR[i - 2])(elem1, elem2, &sign);
	elem2->sign = sign;
	remove_after_compute();
}