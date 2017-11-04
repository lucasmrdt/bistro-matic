/*
** EPITECH PROJECT, 2017
** syntax test 
** File description:
**  error is not direct 
*/

#include <criterion/criterion.h>
#include "my.h"
#include "bistromatic.h"

Test(Test_seven, basic_test)
{
        char    *tmp = "-123";
	char    *ops = "()+-/%";
	char    *base = "0123456789";
	char    *str = "(123)+(40)3";

	cr_assert(verif_parenthese_number(str) == 84, "Err in (123)+403");
}

Test(Test_eight, basic_test)
{
 	char    *tmp = "-123";
	char    *ops = "()+-\%";
	char    *base = "0123456789";
	char    *str = "1234";

	cr_assert(verif_parenthese_number(str) == 0, "Err in 1234");
}

Test(Test_nine, basic_test)
{
 	char    *tmp = "-123";
	char    *ops = "()+-\%";
	char    *base = "0123456789";
	char    *str = ")1234";

	cr_assert(verif_parenthese_number(str) == 84, "Err in )1234");
}

Test(Test_ten, basic_test)
{
 	char    *tmp = "-123";
	char    *ops = "()+-\%";
	char    *base = "0123456789";
	char    *str = ")+12)34";

	cr_assert(verif_parenthese_number(str) == 84, "Err in )+12)34");
}
