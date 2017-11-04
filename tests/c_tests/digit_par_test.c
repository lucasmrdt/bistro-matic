/*
** EPITECH PROJECT, 2017
** digit_par_test
** File description:
** test for check the DIGIT( syntax error
*/

#include <criterion/criterion.h>
#include "bistromatic.h"

int verif_digit_par(char *);

Test(Test_one, digit_par)
{
	char *str = "4(4)";

	cr_assert(verif_digit_par(str) == 84, "Err in 123(4)");
}
Test(Test_two, digit_par)
{
	char *str = "12+(124)";

	cr_assert(verif_digit_par(str) == 0, "Err in 123+(4)");
}

Test(Test_three, digit_par)
{
	char *str = "123-(4)";

	cr_assert(verif_digit_par(str) == 0, "Err in 123-(4)");
}

Test(Test_four, digit_par)
{
	char *str = "123*(4)";

	cr_assert(verif_digit_par(str) == 0, "Err in 123*(4)");
}

Test(Test_five, digit_par)
{
	char *str = "123/(4)";

	cr_assert(verif_digit_par(str) == 0, "Err in 123/(4)");
}

Test(Test_six, digit_par)
{
	char *str = "123%(4)";

	cr_assert(verif_digit_par(str) == 0, "Err in 123%(4)");
}
