/*
** EPITECH PROJECT, 2017
** is_single_neg_sign
** File description:
** file
*/

#include "bistromatic.h"

int	is_single_neg_sign(char **str)
{
	if (**(str - 1) == OP[OP_OPEN_PRENT_IDX] && is_op(**str) && **(str + 2) == OP[OP_CLOSE_PARENT_IDX])
		return (1);
	return (0);
}