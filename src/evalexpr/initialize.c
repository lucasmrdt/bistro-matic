/*
** EPITECH PROJECT, 2017
** initialize
** File description:
** initializes functions
*/

#include <stdlib.h>
#include "my.h"
#include "evalexpr.h"

int	initialize(linked_nb_t **stack_nb, linked_op_t **stack_op)
{
	if (!initialize_stacks(stack_nb, stack_op))
		return (0);
	if (!initialize_global_var())
		return (0);
	return (1);
}

int	initialize_stacks(linked_nb_t **stack_nb, linked_op_t **stack_op)
{
	*stack_nb = malloc(sizeof(**stack_nb));
	if (!*stack_nb)
		return (0);
	(*stack_nb)->next = NULL;
	*stack_op = malloc(sizeof(**stack_op));
	if (!*stack_op)
		return (0);
	(*stack_op)->next = NULL;
	return (1);
}

int	initialize_global_var(void)
{
	int const	nb_ops = 7;

	ops = malloc(sizeof(char) * nb_ops);
	if (!ops)
		return (0);
	ops = my_strdup("()+-*/\%");
	return (1);
}