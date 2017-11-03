/*
** EPITECH PROJECT, 2017
** is_low_op
** File description:
** file
*/

#include "bistromatic.h"

bool	is_low_op(char c)
{
	if (c == OPS[OP_NEG_IDX]
	|| c == OPS[OP_PLUS_IDX])
		return (true);
	return (false);
}