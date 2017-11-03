/*
** EPITECH PROJECT, 2017
** is_hight_op
** File description:
** file
*/

#include "bistromatic.h"

bool	is_hight_op(char c)
{
	if (!is_low_op(c))
		return (true);
	return (false);
}