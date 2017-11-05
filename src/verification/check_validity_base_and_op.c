/*
** EPITECH PROJECT, 2017
** validate base ops
** File description:
** check if there's same carac in base and OPS
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

int	check_validity_base_and_op(char *base, char *ops)
{
	int	i;

	while (*base) {
		i = -1;
		while (ops[++i]) {
			if(*base == ops[i])
				display_error(SYNTAX_ERROR_MSG);
		}
		base++;
	}
}
