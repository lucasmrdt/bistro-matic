/*
** EPITECH PROJECT, 2017
** check base and ops
** File description:
** check if base and ops haven't same caracs
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

/*
** Check if the same char is in BASE and in OPS.
** If yes, return the SYNTAX_ERROR_MSG.
*/
int	check_validity_base_or_op(char *str)
{
	int	i = 0;
	int	j;

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
