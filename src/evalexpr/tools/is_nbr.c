/*
** EPITECH PROJECT, 2017
** is_nbr
** File description:
** file
*/

#include <stdbool.h>
#include "bistromatic.h"

int	is_nbr(char c)
{
	int	i = -1;

	while (BASE[++i])
		if (c == BASE[i])
			return (true);
	return (false);
}