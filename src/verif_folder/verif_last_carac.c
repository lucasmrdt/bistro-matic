/*
** EPITECH PROJECT, 2017
** verif last carac
** File description:
** verif last carac
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

char	*OPS = "()+-*/%";

int	verif_last_carac(char *str)
{
	int	i = 2;

	while (OPS[i]) {
		if (str[my_strlen(str) -1] == OPS[i] || str[my_strlen(str) - 1] == OPS[0]) {
			my_putstr(SYNTAX_ERROR_MSG);
			exit(EXIT_SYNTAX);
		}
		i++;
	}
	return (0);
}
