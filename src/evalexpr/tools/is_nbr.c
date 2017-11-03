/*
** EPITECH PROJECT, 2017
** is_nbr
** File description:
** file
*/

#include "bistromatic.h"

bool	is_nbr(char c)
{
	int	i = -1;

	while (OPS[++i])
		if (c == OPS[i])
			return (true);
	return (false);
}