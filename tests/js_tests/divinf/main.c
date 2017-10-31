/*
** EPITECH PROJECT, 2017
** main
** File description:
** main of test
*/

#include <stdio.h>
#include "bistromatic.h"

int	main(int ac, char **av)
{
	char	ops[] = "()+-/*\%";
	char	base[] = "0123456789";

	(void)(ac);
	initialize(ops, base);
	printf("%s\n", divinf(av[1], av[2]));
}
