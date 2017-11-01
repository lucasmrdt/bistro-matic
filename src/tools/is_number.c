/*
** EPITECH PROJECT, 2017
** is_number.c
** File description:
** file
*/

#include "bistromatic.h"

int	is_number(char c)
{
	int	i = -1;

	while (BASE[++i])
		if( c == BASE[i++])
			return (1);
	return (0);
}
