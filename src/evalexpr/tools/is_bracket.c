/*
** EPITECH PROJECT, 2017
** is_bracket
** File description:
** file
*/

#include "bistromatic.h"

bool	is_bracket(char c)
{
	if (c == OPS[OP_OPEN_PARENT_IDX] || c == OPS[OP_CLOSE_PARENT_IDX])
		return (true);
	return (false);
}