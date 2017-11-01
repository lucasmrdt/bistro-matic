/*
** EPITECH PROJECT, 2017
** add_next_nb_and_op
** File description:
** test
*/

#include <criterion/criterion.h>
#include "bistromatic.h"

Test(add_next_nb_and_op, basic_test)
{
	char	*tmp = "-123";
	char	*ops = "()+-*/\%";
	char	*base = "0123456789";
	char	*str;

	str = malloc(sizeof(char) * (my_strlen(tmp) + 1));
	str = strdup(tmp);
	initialize(ops, base);
	add_next_nb_and_op(&str);
	cr_assert(strcmp(STACK_NB->value, "123") == 0, "Err (1)");
}

Test(add_next_nb_and_op, medium_test)
{
	char	*tmp = "(-123+5)";
	char	*ops = "()+-*/\%";
	char	*base = "0123456789";
	char	*str;

	tmp++;
	str = malloc(sizeof(char) * (my_strlen(tmp) + 1));
	str = strdup(tmp);
	initialize(ops, base);
	add_next_nb_and_op(&str);
	cr_assert(strcmp(STACK_NB->value, "123") == 0, "Err (1)");
	cr_assert(STACK_NB->sign == '+', "Err (2)");
	cr_assert(STACK_OP->op == '+', "Err (3)");
	cr_assert(strcmp(str, "5)") == 0, "Err (4)");	
}