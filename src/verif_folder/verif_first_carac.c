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
	int	i = 4;

	while (OPS[i]) {
		if (str[0] == OPS[i] || str[0] == OPS[OP_CLOSE_PARENT_IDX]) {
			my_putstr(SYNTAX_ERROR_MSG);
			exit(EXIT_SYNTAX);
		}
		i++;
	}
	return (0);
}
