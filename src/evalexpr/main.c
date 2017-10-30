/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main file
*/

#include <stdlib.h>
#include "my.h"
#include "evalexpr.h"

char	*ops;
pfunc_t	pfunc_arr[] = {&c_add, &c_sub, &c_mul, &c_div, &c_mod};

int	main(int ac, char **av)
{
	if (ac == 2) {
		my_put_nbr(evalexpr(av[1]));
		my_putchar('\n');
		return (0);
	}
	return (84);
}