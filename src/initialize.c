/*
** EPITECH PROJECT, 2017
** initialize
** File description:
** initializes functions
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

linked_nb_t	*STACK_NB;
linked_op_t	*STACK_OP;
char		*OPS;
char		*BASE;
int		BASE_LENGTH;
pfunc_t		COMPUTE_ARR[] = {&c_add, &c_sub, &c_mul, &c_div, &c_mod};

int	initialize(char *ops, char *base)
{
	if (!initialize_stacks())
		return (0);
	if (!initialize_global_var(ops, base))
		return (0);
	return (1);
}

int	initialize_stacks()
{
	STACK_NB = malloc(sizeof(*STACK_NB));
	if (!STACK_NB)
		return (0);
	STACK_NB->next = NULL;
	STACK_OP = malloc(sizeof(*STACK_OP));
	if (!STACK_OP)
		return (0);
	STACK_OP->next = NULL;
	return (1);
}

int	initialize_global_var(char *ops, char *base)
{
	const int	ops_length = my_strlen(ops);

	BASE_LENGTH = my_strlen(BASE);
	if (ops_length != 7)
		return (0);
	OPS = malloc(sizeof(char) * ops_length);
	if (!OPS)
		return (0);
	OPS = my_strdup(ops);
	BASE = malloc(sizeof(char) * base_length);
	if (!BASE)
		return (0);
	BASE = my_strdup(base);
	return (1);
}