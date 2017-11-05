/*
** EPITECH PROJECT, 2017
** initialize
** File description:
** initializes functions
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

stack_elem_t	*STACK_NB;
stack_elem_t	*STACK_OP;
char		*OPS;
char		*BASE;
int		BASE_LENGTH;
compute_pfunc_t		COMPUTE_ARR[] = {&c_add, &c_sub, &c_mul, &c_div, &c_mod, NULL};
verif_pfunc_t		VERIF_ARR[] = {&check_op_after_open_bracket, 
					&check_digit_before_bracket,
					&check_digit_after_bracket,
					&check_double_op,
					&check_char_in_base_or_op,
					NULL};

void	initialize(char *base, char *ops)
{
	initialize_stacks();
	initialize_global_var(base, ops);
}

void	initialize_stacks()
{
	STACK_NB = malloc(sizeof(*STACK_NB));
	if (!STACK_NB)
		exit(EXIT_MALLOC);
	STACK_NB->next = NULL;
	STACK_OP = malloc(sizeof(*STACK_OP));
	if (!STACK_OP)
		exit(EXIT_MALLOC);
	STACK_OP->next = NULL;
}

void	initialize_global_var(char *base, char *ops)
{
	const int	ops_length = my_strlen(ops);

	BASE_LENGTH = my_strlen(base);
	if (ops_length != 7)
		exit(EXIT_MALLOC);
	OPS = malloc(sizeof(char) * ops_length);
	if (!OPS)
		exit(EXIT_MALLOC);
	OPS = my_strdup(ops);
	BASE = malloc(sizeof(char) * BASE_LENGTH);
	if (!BASE)
		exit(EXIT_MALLOC);
	BASE = my_strdup(base);
}
