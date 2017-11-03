/*
** EPITECH PROJECT, 2017
** is_negative
** File description:
** file
*/

#include "bistromatic.h"

int	is_negative(char *str)
{
	if (*str == OPS[OP_NEG_IDX] && is_operator(*(str - 1)))
		return (1);
	return (0);
}