/*
** EPITECH PROJECT, 2017
** evalexpr_tools
** File description:
** file
*/

#include "bistromatic.h"
#include <stdlib.h>

void	next_op(void)
{
	stack_elem_t	*tmp = STACK_OP->next;

	free(STACK_OP->value);
	free(STACK_OP);
	STACK_OP = tmp;
}

void	next_nb(void)
{
	stack_elem_t	*tmp = STACK_NB->next;

	free(STACK_NB->value);
	free(STACK_NB);
	STACK_NB = tmp;
}

void	add_op(stack_elem_t *op)
{
	op->next = STACK_OP;
	STACK_OP = op;
}

void	add_nb(stack_elem_t *nb)
{
	nb->next = STACK_NB;
	STACK_NB = nb;
}

void	remove_after_compute(void)
{
	next_op();
	next_nb();
}