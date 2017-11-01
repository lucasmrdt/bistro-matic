/*
** EPITECH PROJECT, 2017
** is_operator
** File description:
** file
*/

#include "bistromatic.h"

int	is_operator(char c)
{
	int	i = -1;

	while (OPS[++i])
		if (c == OPS[i])
			return (1);
	return (0);
}
