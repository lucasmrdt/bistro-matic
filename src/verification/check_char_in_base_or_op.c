/*
** EPITECH PROJECT, 2017
** check char base
** File description:
** check if the char is in the base or not
*/

#include "bistromatic.h"

/*
** Verif function for check if the character is
** in the BASE or in the OPS (operators).
*/
int	check_char_in_base_or_op(char *str)
{
	if (!is_op(*str) && !is_nbr(*str))
		display_error(SYNTAX_ERROR_MSG);
	return (0);
}
