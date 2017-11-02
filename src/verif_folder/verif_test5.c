/*
** EPITECH PROJECT, 2017
** veriftest "(" and ops
** File description:
** verift "(" and ops
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

char	*OPS = "()+-*/%";

int	verif_carac(char *str)
{
	int	i = 0;
	int	j = 2;

	while (str[i]) {
		if (str[i] == OPS[OP_OPEN_PARENT_IDX])
			while (OPS[j]) {
				if (str[i + 1] == OPS[OP_PLUS_IDX] || str[i + 1] == OPS[OP_MULT_IDX] || str[i + 1] == OPS[OP_CLOSE_PARENT_IDX] ||
				    str[i + 1] == OPS[OP_DIV_IDX] || str[i + 1] == OPS[OP_MOD_IDX]) {
					my_putstr(SYNTAX_ERROR_MSG);
					exit(EXIT_SYNTAX);
				}
				j++;
			}
		j = 2;
		i++;
	}
	return (0);
}
