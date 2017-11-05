/*
** EPITECH PROJECT, 2017
** main test
** File description:
** file
*/

#include "bistromatic.h"

int	main(int ac, char **av)
{
        initialize(av[1], av[2]);
	check_syntax(av[3]);
	return (0);
}
