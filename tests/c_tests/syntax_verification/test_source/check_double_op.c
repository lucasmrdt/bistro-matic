/*
** EPITECH PROJECT, 2017
** verif_doublecarac.c
** File description:
** file
*/

#include "my.h"
#include "bistromatic.h"
#include "stdlib.h"

int	check_double_op(char *str)
{
	if (is_op(*str) && !is_bracket(*str))
		if (is_high_op(*(str + 1)) && !is_bracket(*(str + 1)))
			return (84);
	return (0);
}
