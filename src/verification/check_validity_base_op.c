/*
** EPITECH PROJECT, 2017
** check base and ops
** File description:
** check if base and ops haven't same caracs
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

int	check_validity_base_op(char *str)
{
	unsigned	i = 0;
	unsigned	j;

	while (str[i]) {
		j = 0;
		while (str[i] != str[j] && i != j && str[j])
			j++;
		if (str[j] && str[i] == str[j] && i != j)
			display_error(SYNTAX_ERROR_MSG);
		i++;
	}
	return (0);
}
