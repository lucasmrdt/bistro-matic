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
        char    *tmp = "-123";
        char    *ops = "()+-/%";
        char    *base = "0123456789";
        char    *str = "(123)4";
        cr_expect(verif_parenthese_number(str) == 84, "Err in 123)4");
}

Test(Test_two, basic_test)
{
        char    *tmp = "-123";
        char    *ops = "()+-/%";
        char    *base = "0123456789";
        char    *str = "(123)+4";

	cr_expect(verif_parenthese_number(str) == 0, "Err in 123)+4");
}

Test(Test_three, basic_test)
{
        char    *tmp = "-123";
        char    *ops = "()+-/%";
        char    *base = "0123456789";
        char    *str = "(123)-4";

	cr_assert(verif_parenthese_number(str) == 0, "Err in (123)-4");
}

Test(Test_four, basic_test)
{
        char    *tmp = "-123";
        char    *ops = "()+-/%";
        char    *base = "0123456789";
        char    *str = "(123)*4";

	cr_expect(verif_parenthese_number(str) == 0, "Err in (123)*4");
}

Test(Test_five, basic_test)
{
        char    *tmp = "-123";
        char    *ops = "()+-/%";
        char    *base = "0123456789";
        char    *str = "(123)/4";

	cr_expect(verif_parenthese_number(str) == 0, "Err in (123)/4");
}

Test(Test_six, basic_test)
{
        char    *tmp = "-123";
        char    *ops = "()+-/%";
        char    *base = "0123456789";
        char    *str = "(123)%4";

	cr_expect(verif_parenthese_number(str) == 0, "Err in (123)%4");
}

