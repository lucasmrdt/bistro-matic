/*
** EPITECH PROJECT, 2017
** verif_doublecarac.c
** File description:
** check double carac
*/

#include "my.h"
#include "bistromatic.h"
#include "stdlib.h"

char	*OPS = "()+-*/%";

int	verif_doublecarac(char *str)
{
	int	i = 0;
	int	j = 2;

	while (str[i]) { 
		while (str[i] != OPS[j] && OPS[j])
			j++;
		if (str[i] == OPS[j] && OPS[j])
			j = 2;
		while (OPS[j] && str[i + 1] != OPS[j] && str[i + 1]) { 
			j++;
		}
		if (str[i + 1] == OPS[j] && j != OP_SUB_IDX) {
			my_putstr(SYNTAX_ERROR_MSG);
			exit(EXIT_SYNTAX);
		}

		j = 2;
		i++;
}
	return (0);
}
