/*
** EPITECH PROJECT, 2017
** digit_par_test
** File description:
** test for check the DIGIT( syntax error
*/

#include <criterion/criterion.h>
#include "bistromatic.h"

initialize("0123456789", "()+-*/%");

Test(digit_before_bracket, digit_par)
{
	char	*str = "4(4)";

	cr_assert(check_syntax(str) == 84, "Err in 123(4)");
}

Test(digit_before_bracket, digit_par)
{
	char	*str = "77+(123)";

	cr_assert(check_syntax(str) == 0, "Err in 123+(4)");
}

Test(digit_before_bracket, digit_par)
{
	char	*str = "123-(4)";

	cr_assert(check_syntax(str) == 0, "Err in 123-(4)");
}

Test(digit_before_bracket, digit_par)
{
	char	*str = "123*(4)";

	cr_assert(check_syntax(str) == 0, "Err in 123*(4)");
}

Test(digit_before_bracket, digit_par)
{
	char	*str = "123/(4)";

	cr_assert(check_syntax(str) == 0, "Err in 123/(4)");
}

Test(digit_before_bracket, digit_par)
{
	char	*str = "123%(4)";

	cr_assert(check_syntax(str) == 0, "Err in 123%(4)");
}

Test(digit_before_bracket, digit_par)
{
	char	*str = "123+(56)-4(6)";

	cr_assert(check_syntax(str) == 84, "Err in 123+(56)-4(6)");
}

Test(digit_before_bracket, digit_par)
{
	char	*str = "1+(2-(7)(1)";

	cr_assert(check_syntax(str) == 84, "Err in 1+(2-(7)(1)");
}

Test(digit_before_brackete, digit_par)
{
	char	*str = "((((3))))";

	cr_assert(check_syntax(str) == 0, "Err in ((((3))))");
}

Test(digit_before_bracket, digit_par)
{
	char	*str = "3-(1+((2)))";

	cr_assert(check_syntax(str) == 0, "Err in 3-(1+((2)))");
}
