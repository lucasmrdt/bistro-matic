/*
** EPITECH PROJECT, 2017
** verif parentheses number
** File description:
** check if the char after a parenthese is an operator or a number
*/

#include <stdlib.h>
#include "my.h"

int my_putstr(char const *);

int verif_parenthese_number(char *str)
{
	int i = 0;

	while (str[i]) {
		while (str[i] != ')' && str[i])
			i++;
		if (str[i] == ')') {
			if (str[i + 1] == OP_PLUS_IDX
			    || str[i + 1] == OP_SUB_IDX
			    || str[i + 1] == OP_MULT_IDX
			    || str[i + 1] == OP_DIV_IDX
			    || str[i + 1] == OP_MOD_IDX ) {
			} else {
				my_putstr(SYNTAX_ERROR_MSG);
				exit(EXIT_SYNTAX);
			}
		}
		i += 1;
	}
	return (0);
}

int verif_number_parenthese(char *str)
{
	int i = 0;

	while (str[i]) {
		while (str[i] != '(' && str[i])
			i++;
		if (str[i] == '(') {
			if (str[i - 1] == OP_PLUS_IDX
			    || str[i - 1] == OP_SUB_IDX
			    || str[i - 1] == OP_MULT_IDX
			    || str[i - 1] == OP_DIV_IDX
			    || str[i - 1] == OP_MOD_IDX ) {
			} else {
				my_putstr(SYNTAX_ERROR_MSG);
				exit(EXIT_SYNTAX);
			}
		}
		i += 1;
	}
	return (0);
}
