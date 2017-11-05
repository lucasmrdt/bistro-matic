/*
** EPITECH PROJECT, 2017
** verif test bracket after ops 
** File description:
** verif test op bracket
*/

#include <criterion/criterion.h>
#include "my.h"
#include "bistromatic.h"

int	verif_bracket_after_ops(char *str);

Test(verif_bracket_after_ops, verif_mult_bracket)
{
	char	str[] = "8*(-74*)-32";
	cr_expect(verif_bracket_after_ops(str) == 84, "verif_mult_bracket failed");
}

Test(verif_bracket_after_ops, verif_div_bracket)
{
	char	str[] = "23+(21/)21)";
	cr_expect(verif_bracket_after_ops(str) == 84, "verif_div_bracket failed");
}

Test(verif_bracket_after_ops, verif_mod_bracket)
{
	char	str[] = "98%21%)+6";
	cr_expect(verif_bracket_after_ops(str) == 84, "verif_mod_bracket failed");
}

Test(verif_bracket_after_ops, verif_sub_bracket)
{
	char	str[] = "(890-)+60*4)";
	cr_expect(verif_bracket_after_ops(str) == 84, "verif_sub_bracket failed");
}

Test(verif_bracket_after_ops, verif_add_bracket)
{
	char	str[] = "821/6(44-3+)/7";
	cr_expect(verif_bracket_after_ops(str) == 84, "verif_add_bracket failed");
}

Test(verif_bracket_after_ops, verif_close_bracket)
{
	char	str[] = "(9*(32-1))-6";
	cr_expect(verif_bracket_after_ops(str) == 0, "verif_close_bracket failed");
}

Test(verif_bracket_after_ops, verif_classic)
{
	char	str[] = "2317(-22/3)+(+32/6)*4";
	cr_expect(verif_bracket_after_ops(str) == 0, "verif_classic failed");
}
