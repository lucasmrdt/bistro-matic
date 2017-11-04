/*
** EPITECH PROJECT, 2017
** is_operator
** File description:
** file
*/

#include <stdbool.h>
#include "bistromatic.h"

int	is_op(char c)
{
	int	i = -1;

	while (OPS[++i])
		if (c == OPS[i])
			return (true);
	return (false);
}
