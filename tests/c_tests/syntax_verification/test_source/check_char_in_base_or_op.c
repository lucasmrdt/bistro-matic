/*
** EPITECH PROJECT, 2017
** check char base
** File description:
** check if the char is in the base or not
*/

#include "bistromatic.h"

int	check_char_in_base_or_op(char *str)
{
	if (!is_op(*str) && !is_nbr(*str))
		return (84);
	return (0);
}
