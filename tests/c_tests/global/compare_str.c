/*
** EPITECH PROJECT, 2017
** compare_str
** File description:
** compare_str tests
*/

#include <criterion/criterion.h>
#include "my.h"

Test(bistromatic, compare_str)
{
	cr_assert(compare_str("1234", "1233") > 0, "Err (1)");
	cr_assert(compare_str("111111111111111111111111", "111111111111111111111110") > 0, "Err (2)");
	cr_assert(compare_str("111111111111111111111110", "111111111111111111111111") < 0, "Err (3)");
}
