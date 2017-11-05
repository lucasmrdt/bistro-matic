/*
** EPITECH PROJECT, 2017
** verif parentheses number
** File description:
** check if the char after a parenthese is an operator or a number
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

int my_putstr(char const *);

char    *OPS = "()+-*/%";

int verif_parenthese_number(char *str)
{
	int i = 0;

	while (str[i]) {
		while (str[i] != OPS[OP_CLOSE_PARENT_IDX] && str[i]) {
			i++;
			if (str[i] == '\0')
                                return (0);
		}
		if (str[i] == OPS[OP_CLOSE_PARENT_IDX]) {
			if (str[i + 1] == OPS[OP_CLOSE_PARENT_IDX]
			    || str[i + 1] == OPS[OP_PLUS_IDX]
			    || str[i + 1] == OPS[OP_SUB_IDX]
			    || str[i + 1] == OPS[OP_MULT_IDX]
			    || str[i + 1] == OPS[OP_DIV_IDX]
			    || str[i + 1] == OPS[OP_MOD_IDX]
			    || str[i + 1] == OPS[OP_CLOSE_PARENT_IDX]) {
			} else {
				display_error(SYNTAX_ERROR_MSG, EXIT_SYNTAX); 
			}
		}
		i++;
	}
	return (0);
}
