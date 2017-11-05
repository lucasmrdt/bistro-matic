/*
** EPITECH PROJECT, 2017
** check_error
** File description:
** file
*/

#include "bistromatic.h"

void	check_error(int ac, char **av)
{
	if (ac != 4) {
		my_putstr("Usage: ");
		my_putstr(av[0]);
		my_putstr(" base ops \"()+_*/%\" exp_len\n");
		return (EXIT_USAGE);
	}
	if (my_strlen(av[1]) < 2)
		display_error(SYNTAX_ERROR_MSG);
	if (my_strlen(av[2]) != 7)
		display_error(SYNTAX_ERROR_MSG);
}