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

/*void	my_putstr(char *);
**int	my_strlen(char *);
**int	my_atoi(char *);

 ---> Put it in my.h
*/

// static void	check_base(char *base);
// static void	check_ops(char *ops);
static char	*get_expr (unsigned size);

int	main(int ac, char **av)
{
	unsigned int	size;
	char		*expr;

	(void)(ac);
	if (ac != 4) {
		my_putstr("Usage: ");
		my_putstr(av[0]);
		my_putstr(" base ops \"()+_*/%\" exp_len\n");
		return (EXIT_USAGE);
	}
	initialize(av[1], av[2]);
//	check_error();
//	check_syntax();
	size = my_getnbr(av[3]);
	expr = get_expr(size);
	eval_expr(expr);
	return (EXIT_SUCCESS);
}
/*
static void	check_base(char const *b)
{
	if (my_strlen(b) < 2) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit (EXIT_BASE);
	}
}
*/
char	*get_expr(unsigned int size)
{
	char *expr;

	if (size <= 0)
		display_error(ERROR_MSG, EXIT_MALLOC);
	expr = malloc(size + 1);
	if (!expr)
		display_error(ERROR_MSG, EXIT_MALLOC);
	if (read(0, expr, size) != size)
		display_error(ERROR_MSG, EXIT_READ);
	expr[size] = 0;
	if (expr[size - 1] == '\n')
		expr[size - 1] = 0;
	return (expr);
}
/*
static void	check_ops(char const *ops)
{
	if (my_strlen(ops) != 7) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_OPS);
	}
}
*/