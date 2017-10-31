/*
** EPITECH PROJECT, 2017
** evalexpr
** File description:
** file
*/

#include <stdlib.h>
#include "evalexpr.h"

int evalexpr(char *str, char *ops, char *base)
{
	if (!initialize(ops, base))
		return (0);
	while (*str)
		if (!is_operator(*str) || is_negative_number(str))
		{
			//			nb = get_number(&str);
			//			if (!add_number(&STACK_NB, nb))
			//				return (0);
		}
		else
		{
			compute_priority(*str);
			str++;
		}
	while (STACK_OP->op)
		compute();
	return (STACK_NB->nb);
}

int compute_priority(char op)
{
	void *tmp;
	int weight;

	weight = get_weight(op);
	if (op == ')')
	{
		while (STACK_OP->op != '(')
			compute();
		tmp = STACK_OP->next;
		free(STACK_OP);
		STACK_OP = tmp;
	}
	else
	{
		while (weight <= STACK_OP->weight && STACK_OP->weight != 3)
			compute();
		add_op(STACK_OP, op, weight);
	}
	return (1);
}

void	compute(void)
{
	void	*elem1;
	void	*elem2;
	char	*result;
	char	sign;
	int	i = -1;

	elem1 = STACK_NB->next;
	elem2 = STACK_NB;
	while (ops[++i] != STACK_OP->op);
	set_bigger_first(&elem1, &elem2);
	result = pfunc_arr[i - 2](elem1, elem2, &sign);
	add_number(result, sign);
	STACK_OP = tmp;
}