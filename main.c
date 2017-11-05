/*
** EPITECH PROJECT, 2017
** Bistro-matic
** File description:
** bistro matic
*/

#include <stdlib.h>
#include <unistd.h>
#include "bistromatic.h"
#include "my.h"

static char	*get_expr (unsigned size);

int	main(int ac, char **av)
{
	unsigned int	size;
	char		*expr;

	check_error(ac, av);
	initialize(av[1], av[2]);
	size = my_getnbr(av[3]);
	expr = get_expr(size);
	check_syntax(expr);
	my_putstr(eval_expr(expr));
	return (EXIT_SUCCESS);
}

char	*get_expr(unsigned int size)
{
	char *expr;

	if (size <= 0)
		display_error(ERROR_MSG);
	expr = malloc(size + 1);
	if (!expr)
		display_error(ERROR_MSG);
	if (read(0, expr, size) != size)
		display_error(ERROR_MSG);
	expr[size] = 0;
	if (expr[size - 1] == '\n')
		expr[size - 1] = 0;
	return (expr);
}