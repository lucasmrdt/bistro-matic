/*
** EPITECH PROJECT, 2017
** digit_par_test
** File description:
** test for check the DIGIT( syntax error
*/

#include <criterion/criterion.h>
#include "bistromatic.h"

Test(Test_one, digit_par)
{
	char	*str = "4(4)";

	cr_assert(verif_digit_par(str) == 84, "Err in 123(4)");
}

Test(Test_two, digit_par)
{
	char	*str = "77+(123)";

	cr_assert(verif_digit_par(str) == 0, "Err in 123+(4)");
}

Test(Test_three, digit_par)
{
	char	*str = "123-(4)";

	cr_assert(verif_digit_par(str) == 0, "Err in 123-(4)");
}

Test(Test_four, digit_par)
{
	char	*str = "123*(4)";

	cr_assert(verif_digit_par(str) == 0, "Err in 123*(4)");
}

Test(Test_five, digit_par)
{
	char	*str = "123/(4)";

	cr_assert(verif_digit_par(str) == 0, "Err in 123/(4)");
}

Test(Test_six, digit_par)
{
	char	*str = "123%(4)";

	cr_assert(verif_digit_par(str) == 0, "Err in 123%(4)");
}

Test(Test_seven, digit_par)
{
	char	*str = "123+(56)-4(6)";

	cr_assert(verif_digit_par(str) == 84, "Err in 123+(56)-4(6)");
}

Test(Test_eight, digit_par)
{
	char	*str = "1+(2-(7)(1)";

	cr_assert(verif_digit_par(str) == 84, "Err in 1+(2-(7)(1)");
}

Test(Test_nine, digit_par)
{
	char	*str = "((((3))))";

	cr_assert(verif_digit_par(str) == 0, "Err in ((((3))))");
}

Test(Test_ten, digit_par)
{
	char	*str = "3-(1+((2)))";
		
	cr_assert(verif_digit_par(str) == 0, "Err in 3-(1+((2)))"); 
}
