/*
** EPITECH PROJECT, 2017
** test 
** File description:
** syntax test 
*/

#include <stdio.h>
#include <criterion/criterion.h>
#include "bistromatic.h"


Test(Test_one, basic_test)
{
	char    *str = "(123)4";

	cr_expect(verif_parenthese_number(str) == 84, "Err in 123)4");
}

Test(Test_two, basic_test)
{
	char    *str = "(123)+4";

	cr_expect(verif_parenthese_number(str) == 0, "Err in 123)+4");
}

Test(Test_three, basic_test)
{
	char    *str = "(123)-4";

	cr_assert(verif_parenthese_number(str) == 0, "Err in (123)-4");
}

Test(Test_four, basic_test)
{
	char    *str = "(123)*4";

	cr_expect(verif_parenthese_number(str) == 0, "Err in (123)*4");
}

Test(Test_five, basic_test)
{
	char    *str = "(123)/4";

	cr_expect(verif_parenthese_number(str) == 0, "Err in (123)/4");
}

Test(Test_six, basic_test)
{
	char    *str = "(123)%4";

	cr_expect(verif_parenthese_number(str) == 0, "Err in (123)%4");
}

Test(Test_seven, basic_test)
{
	char    *str = "(123)+(40)3";

	cr_assert(verif_parenthese_number(str) == 84, "Err in (123)+403");
}

Test(Test_eight, basic_test)
{
	char    *str = "1234";

	cr_assert(verif_parenthese_number(str) == 0, "Err in 1234");
}

Test(Test_nine, basic_test)
{
	char    *str = ")1234";

	cr_assert(verif_parenthese_number(str) == 84, "Err in )1234");
}

Test(Test_ten, basic_test)
{
	char    *str = ")+12)34";

	cr_assert(verif_parenthese_number(str) == 84, "Err in )+12)34");
}
