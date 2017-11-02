/*
** EPITECH PROJECT, 2017
** verif_doublesub.c
** File description:
** verif double sub
*/

#include "my.h"
#include "bistromatic.h"
#include <stdlib.h>

char	*OPS = "()+-*/%";

int	verif_double_sub(char *str)
{
	int	i = 0;

	while (str[i]) {
		if (str[i] == OPS[OP_SUB_IDX] && str[i + 1] == OPS[OP_SUB_IDX]) {
			my_putstr(SYNTAX_ERROR_MSG);
			exit(EXIT_SYNTAX);
		}
		i++;
	}
	return (0);
}
