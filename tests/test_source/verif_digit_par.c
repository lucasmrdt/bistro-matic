/*
** EPITECH PROJECT, 2017
** verif digit par
** File description:
** verif the DIGIT( error syntax
*/

#include "bistromatic.h"
#include "my.h"

char	*OPS = "()+-*/%";

int verif_digit_par(char *str)
{
	int i = 0;

	while (str[i]) {
		while (str[i + 1] != OPS[OP_OPEN_PARENT_IDX] && str[i])
			i++;
		if (str[i] == OPS[OP_OPEN_PARENT_IDX]
		    || str[i] == OPS[OP_PLUS_IDX]
		    || str[i] == OPS[OP_SUB_IDX]
		    || str[i] == OPS[OP_MULT_IDX]
		    || str[i] == OPS[OP_DIV_IDX]
		    || str[i] == OPS[OP_MOD_IDX]) {
		} else {
			return (84);
		}
		i++;
	}
	return (0); 
}
