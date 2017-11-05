/*
** EPITECH PROJECT, 2017
** main test
** File description:
** file
*/

#include "bistromatic.h"

int	main(int ac, char **av)
{
	printf("[0] &check_op_after_open_bracket\n[1] &check_digit_before_bracket\n[2] &check_digit_after_bracket\n[3] &check_double_op\n[4] &check_char_in_base_or_op\n\n");
	initialize(av[1], av[2]);
	check_syntax(av[3]);
	return (0);	
}