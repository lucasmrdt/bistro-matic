/*
** EPITECH PROJECT, 2017
** verif_syntax.c
** File description:
** verif syntax
*/

#include "my.h"
#include "bistromatic.h"
#include <stdlib.h>

char	*OPS = "()+-*/%";

int	verif_bracket_after_ops(char *str)
{
	int	i = 0;
	int	j = 2;

	while (str[i]) {
		while (str[i] != OPS[j] && OPS[j]) {
				j++;
			}
		if (OPS[j] && str[i + 1] == OPS[OP_CLOSE_PARENT_IDX]) {
			my_putstr(SYNTAX_ERROR_MSG);
			return (EXIT_SYNTAX);
			}
		if (!OPS[j])
			j = 2;
		i++;
	}
	return (0);
}
