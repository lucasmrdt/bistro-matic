/*
** EPITECH PROJECT, 2017
** bas_op_test
** File description:
** check if the base and the ops are goods 
*/

#include <criterion/criterion.h>
#include "my.h"
#include "bistromatic.h"

Test(test_one, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "11";

	cr_assert(check_char_base(str) == 0, "Err 11"); 
}

Test(test_two, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "1+1";

	cr_assert(check_char_base(str) == 0, "Err 1+1"); 
}

Test(test_three, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "1-1";

	cr_assert(check_char_base(str) == 0, "Err 1-1"); 
}

Test(test_four, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "1*1";

	cr_assert(check_char_base(str) == 0, "Err 1*1"); 
}

Test(test_five, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "1/1";

	cr_assert(check_char_base(str) == 0, "Err 1/1"); 
}

Test(test_six, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "1%1";

	cr_assert(check_char_base(str) == 0, "Err 1%1"); 
}

Test(test_seven, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "p";

	cr_assert(check_char_base(str) == 84, "Err p"); 
}

Test(test_eight, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "1+(23p)-4";

	cr_assert(check_char_base(str) == 84, "Err 1+(23p)-4"); 
}

Test(test_nine, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "1l1";

	cr_assert(check_char_base(str) == 84, "Err 1l1"); 
}

Test(test_ten, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "(";

	cr_assert(check_char_base(str) == 0, "Err ("); 
}

Test(test_eleven, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = ")";

	cr_assert(check_char_base(str) == 0, ")"); 
}

Test(test_twelve, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "+";

	cr_assert(check_char_base(str) == 0, "Err +"); 
}

Test(test_thirteen, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "-";

	cr_assert(check_char_base(str) == 0, "Err -"); 
}

Test(test_fourteen, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "*";

	cr_assert(check_char_base(str) == 0, "Err *"); 
}

Test(test_fifteen, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "/";

	cr_assert(check_char_base(str) == 0, "Err /"); 
}

Test(test_sixteen, base_op)
{
	char *BASE = "0123456789";
	char *OPS = "()+-*/%";
	char *str = "%";

	cr_assert(check_char_base(str) == 0, "Err %"); 
}




