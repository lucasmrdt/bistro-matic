/*
** EPITECH PROJECT, 2017
** get_weight
** File description:
** file
*/
 
#include "bistromatic.h"

int	get_weight(char op)
{
	int	i = -1;

	while (OPS[++i])
		if (OPS[i] == op)
			return (i < 2 ? 3 : i < 4 ? 1 : 2);
	return (0);
}
