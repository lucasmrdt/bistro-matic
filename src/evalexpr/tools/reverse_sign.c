/*
** EPITECH PROJECT, 2017
** reverse_sign
** File description:
** file
*/

#include "bistromatic.h"

void	reverse_sign(stack_elem_t **elem)
{
	char	sign = (*elem)->sign;

	if (sign == OPS[OP_NEG_IDX])
		(*elem)->sign = OPS[OP_PLUS_IDX];
	else
		(*elem)->sign = OPS[OP_NEG_IDX];
}