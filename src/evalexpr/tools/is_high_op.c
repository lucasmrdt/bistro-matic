/*
** EPITECH PROJECT, 2017
** is_hight_op
** File description:
** file
*/

#include <stdbool.h>
#include "bistromatic.h"

int	is_high_op(char c)
{
	if (!is_low_op(c) && !is_nbr(c))
		return (true);
	return (false);
}
