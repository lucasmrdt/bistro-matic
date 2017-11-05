/*
** EPITECH PROJECT, 2017
** verif digit parenthese
** File description:
** check the DIGIT( syntax error 
*/

#include "bistromatic.h"
#include "my.h"

char    *OPS = "()+-*/%";

int verif_digit_par(char *str)
{
	int i = 0;

	while (str[i]) {
		while (str[i] != OPS[OP_OPEN_PARENT_IDX] && str[i]) {
			i++;
			if (str[i] == '\0')
				return (0);
		}
		if (str[i] == OPS[OP_OPEN_PARENT_IDX]) {
			if (str[i - 1] == OPS[OP_OPEN_PARENT_IDX]
			    || str[i - 1] == OPS[OP_PLUS_IDX]
			    || str[i - 1] == OPS[OP_SUB_IDX]
			    || str[i - 1] == OPS[OP_MULT_IDX]
			    || str[i - 1] == OPS[OP_DIV_IDX]
			    || str[i - 1] == OPS[OP_MOD_IDX]
			    || str[0] == OPS[OP_OPEN_PARENT_IDX]) {
			} else {
				display_error(SYNTAX_ERROR_MSG, EXIT_SYNTAX); 
			}
		}
		i++;
	}
	return (0);
}
