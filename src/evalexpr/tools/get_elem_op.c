/*
** EPITECH PROJECT, 2017
** get_op
** File description:
** file
*/

#include "bistromatic.h"
#include <stdlib.h>

stack_elem_t	*get_elem_op(char c)
{
	stack_elem_t	*op;
	int		weight;

	if (!is_op(c))
		exit(EXIT_READ);
	weight = get_weight(c);
	op = malloc(sizeof(*op));
	if (!op)
		exit(EXIT_MALLOC);
	op->value = malloc(sizeof(char) * 2);
	if(!op->value)
		exit(EXIT_MALLOC);
	op->value = char_to_str(c);
	op->weight = weight;
	return (op);
}