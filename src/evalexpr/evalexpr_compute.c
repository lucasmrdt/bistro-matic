/*
** EPITECH PROJECT, 2017
** evalexpr_compute
** File description:
** file
*/

#include "bistromatic.h"
#include <stdlib.h>

void	compute_priority(stack_elem_t *elem)
{
	printf("comp : %c\n", elem->value[0]);
	if (*(elem->value) == OPS[OP_CLOSE_PARENT_IDX]) {
		while (*(STACK_OP->value) != OPS[OP_OPEN_PARENT_IDX]) {
			printf("compute\n");
			compute();
		}
		next_op();
		printf("next op : %c\n", STACK_OP->value[0]);
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
	char		sign;
	int		i = -1;

	elem2 = STACK_NB;
	elem1 = STACK_NB->next;
	while (OPS[++i] != *(STACK_OP->value));
	printf("%c%s %c %c%s = ", elem1->sign, elem1->value, OPS[i], elem2->sign, elem2->value);
	STACK_NB->next->value = (COMPUTE_ARR[i - 2])(elem1, elem2, &sign);
	STACK_NB->next->sign = sign;
	printf("%c%s\n", STACK_NB->next->sign, STACK_NB->next->value);
	remove_after_compute();
}