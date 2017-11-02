/*
** EPITECH PROJECT, 2017
** verif ")" "("
** File description:
** verif parenthesis
*/

#include "my.h"
#include "bistromatic.h"
#include <stdlib.h>

char	*OPS = "()+-*/%";

int	verif_parenthesis(char *str)
{
	int	i = -1;

	while (str[++i]) {
		if (str[i] == OPS[OP_CLOSE_PARENT_IDX] && str[i + 1] == OPS[OP_OPEN_PARENT_IDX]) {
			my_putstr(SYNTAX_ERROR_MSG);
			exit(EXIT_SYNTAX);
		}
	}
	return (0);
}
