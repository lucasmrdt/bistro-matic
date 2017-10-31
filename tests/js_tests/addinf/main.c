/*
** EPITECH PROJECT, 2017
** main
** File description:
** main of test
*/

#include <stdio.h>
#include "bistromatic.h"

char	*BASE;
char	*OPS;

int	main(int ac, char **av)
{
	char	ops[] = "()+-/*\%";
	char	base[] = "0123456789";
	char	sign = '+';
	int	i = -1;

	(void)(ac);
	initialise(ops, base);
	printf("%s\n", addinf(av[1], av[2], sign));
}
