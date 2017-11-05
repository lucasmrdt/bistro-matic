/*
** EPITECH PROJECT, 2017
** bas_op_test
** File description:
** check if the base and the ops are goods 
*/

#include <criterion/criterion.h>
#include "my.h"
#include "bistromatic.h"

Test(check_base_or_op, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "11";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 0, "Err 11"); 
}

Test(check_base_or_op, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "1+1";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 0, "Err 1+1"); 
}

Test(check_base_or_opee, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "1-1";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 0, "Err 1-1"); 
}

Test(check_base_or_opr, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "1*1";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 0, "Err 1*1"); 
}

Test(check_base_or_ope, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "1/1";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 0, "Err 1/1"); 
}

Test(check_base_or_op, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "1%1";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 0, "Err 1%1"); 
}

Test(check_base_or_open, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "p";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 84, "Err p"); 
}

Test(check_base_or_opht, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "1+(23p)-4";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 84, "Err 1+(23p)-4"); 
}

Test(check_base_or_ope, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "1l1";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 84, "Err 1l1"); 
}

Test(check_base_or_op, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "(";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 0, "Err ("); 
}

Test(check_base_or_opven, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = ")";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 0, ")"); 
}

Test(check_base_or_oplve, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "+";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 0, "Err +"); 
}

Test(check_base_or_oprteen, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "-";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 0, "Err -"); 
}

Test(check_base_or_oprteen, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "*";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 0, "Err *"); 
}

Test(check_base_or_opteen, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "/";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 0, "Err /"); 
}

Test(check_base_or_opteen, base_op)
{
	char	*base = "0123456789";
	char	*ops = "()+-*/%";
	char	*str = "%";

	initialize(base, ops);
	cr_assert(check_syntax(str) == 0, "Err %"); 
}




