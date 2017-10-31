/*
** EPITECH PROJECT, 2017
** function
** File description:
** file
*/

#include "my.h"
#include "evalexpr.h"

int	get_weight(char op)
{
	int	i = -1;

	while (ops[++i])
		if (ops[i] == op)
			return (i < 2 ? 3 : i < 4 ? 1 : 2);
	return (0);
}

char	*compute_with_signs(char op, char *result_sign)
{
	char	*result;

	while ()
}