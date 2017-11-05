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

int	verif_carac_after_open_bracket(char *str)
{
	int	i = 0;
	int	j = 4;

	while (str[i]) {
		if (str[i] == OPS[OP_OPEN_PARENT_IDX])
			while (OPS[j]) {
				if (str[i + 1] == OPS[j] || str[i + 1] == OPS[OP_CLOSE_PARENT_IDX]) {
					my_putstr(SYNTAX_ERROR_MSG);
					return (EXIT_SYNTAX);
				}
				j++;
			}
		j = 4;
		i++;
	}
	return (0);
}
