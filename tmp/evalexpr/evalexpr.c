/*
** EPITECH PROJECT, 2017
** evalexpr
** File description:
** file
*/

#include <stdlib.h>
#include "evalexpr.h"

int	evalexpr(char *str)
{
	linked_nb_t	*stack_nb;
	linked_op_t	*stack_op;
	int	nb;

	if (!initialize(&stack_nb, &stack_op))
		return (0);
	while (*str)
		if (!is_operator(*str) || is_negative_number(str)) {
			nb = get_number(&str);
			if (!add_number(&stack_nb, nb))
				return (0);
		}
		else {
			compute_priority(&stack_nb, &stack_op, *str);
			str++;
		}
	while (stack_op->op)
		compute(&stack_nb, &stack_op);
	return (stack_nb->nb);
}

int	compute_priority(linked_nb_t **stack_nb, linked_op_t **stack_op,
	char op)
{
	void	*tmp;
	int	weight;

	weight = get_weight(op);
	if (op == ')') {
		while ((*stack_op)->op != '(')
			compute(stack_nb, stack_op);
		tmp = (*stack_op)->next;
		free(*stack_op);
		*stack_op = tmp;
	}
	else {
		while (weight <= (*stack_op)->weight && (*stack_op)->weight != 3)
			compute(stack_nb, stack_op);
		add_op(stack_op, op, weight);
	}
	return (1);
}

void	compute(linked_nb_t **stack_nb, linked_op_t **stack_op)
{
	void	*tmp;
	int	res = 0;
	int	nb[2];
	int	i = -1;

	tmp = (*stack_nb)->next;
	nb[0] = (*stack_nb)->nb;
	free(*stack_nb);
	*stack_nb = tmp;
	nb[1] = (*stack_nb)->nb;
	while (ops[++i] != (*stack_op)->op);
	res = pfunc_arr[i - 2](nb[1], nb[0]);
	(*stack_nb)->nb = res;
	tmp = (*stack_op)->next;
	free(*stack_op);
	*stack_op = tmp;
}

int	add_number(linked_nb_t **stack_nb, int nb)
{
	linked_nb_t	*elem;

	elem = malloc(sizeof(*elem));
	if (!elem)
		return (0);
	elem->nb = nb;
	elem->next = *stack_nb;
	*stack_nb = elem;
	return (1);
}

int	add_op(linked_op_t **stack_op, char op, int weight)
{
	linked_op_t	*elem;

	elem = malloc(sizeof(*elem));
	if (!elem)
		return (0);
	elem->op = op;
	elem->weight = weight;
	elem->next = *stack_op;
	*stack_op = elem;
	return (1);
}
