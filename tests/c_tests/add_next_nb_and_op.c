/*
** EPITECH PROJECT, 2017
** add_next_nb_and_op
** File description:
** test
*/

#include <criterion/criterion.h>
#include "bistromatic.h"

Test(bistromatic, add_next_nb_and_op)
{
	char	str[] = "123";
	char	*ops = "()+-*/\%";
	char	*base = "0123456789";

	initialize(ops, base);
	add_next_nb_and_op(str);
//	cr_expect()
}