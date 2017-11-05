/*
** EPITECH PROJECT, 2017
** check char base
** File description:
** check if the char is in the base or not
*/

#include "my.h"
#include "bistromatic.h"

int	check_char_base(char *str)
{
	int i = 0; 

	while (str[i]) {
		if (str[i] != is_base && str[i] != is_op) {
			my_putstr(SYNTAX_ERROR_MSG);
				return (EXIT_BASE);
		}
		i += 1; 
	}
}
