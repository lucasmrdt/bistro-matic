/*
** EPITECH PROJECT, 2017
** verif_first_carac
** File description:
** verif first carac
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

char	*OPS = "()+-*/%";

int	verif_first_carac(char *str)
{
	int	i = 1;

	while (OPS[i]) {
		if (str[0] == OPS[i] && str[0] != OPS[OP_SUB_IDX]) {
			my_putstr(SYNTAX_ERROR_MSG);
			my_putchar('\n');
			exit(EXIT_SYNTAX);
		}
		i++;
	}
	return (0);
}
