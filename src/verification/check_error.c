/*
** EPITECH PROJECT, 2017
** check_error
** File description:
** file
*/

#include <stdlib.h>
#include "bistromatic.h"
#include "my.h"

/*
** Check if the number of arguments are the good number.
** If not, return the SYNTAX_ERROR_MSG.
** Check if the calcul stock at least 2 characters.
** If not, return the SYNTAX_ERROR_MSG.
** Check is the length of OPS = 7.
** If not, return the SYNTAX_ERROR_MSG.
*/
void	check_error(int ac, char **av)
{
	if (ac != 4) {
		my_putstr("Usage: ");
		my_putstr(av[0]);
		my_putstr(" base ops \"()+_*/%\" exp_len\n");
		exit(EXIT_USAGE);
	}
	if (my_strlen(av[1]) < 2)
		display_error(SYNTAX_ERROR_MSG);
	if (my_strlen(av[2]) != 7)
		display_error(SYNTAX_ERROR_MSG);
	check_validity_base_or_op(av[1]);
	check_validity_base_or_op(av[2]);
	check_validity_base_and_op(av[1], av[2]);
}
