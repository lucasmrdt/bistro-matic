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

	(void)(ac);
	initialize(av[1], ops);
	printf("%s\n", mulinf(av[2], av[3]));
}
