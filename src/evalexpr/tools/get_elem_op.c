/*
** EPITECH PROJECT, 2017
** get_op
** File description:
** file
*/

#include "bistromatic.h"
#include <stdlib.h>

stack_elem_t	*get_elem_op(char **str)
{
	stack_elem_t	*op;
	int		weight;

	if (!is_op(**str))
		exit(EXIT_READ);
	weight = get_weight(**str);
	op = malloc(sizeof(*op));
	if (!op)
		exit(EXIT_MALLOC);
	op->value = malloc(sizeof(char) * 2);
	if(!op->value)
		exit(EXIT_MALLOC);
	op->value = char_to_str(**str);
	op->weight = weight;
	(*str)++;
	return (op);
}