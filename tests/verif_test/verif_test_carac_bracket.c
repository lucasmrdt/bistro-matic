/*
** EPITECH PROJECT, 2017
** verif double carac 
** File description:
** verif test op bracket
*/

#include <criterion/criterion.h>
#include "my.h"
#include "bistromatic.h"

int	verif_carac_after_open_bracket(char *str);

Test(verif_carac_bracket, verif_mult_bracket)
{
	char	str[] = "874(*32)";
	cr_expect(verif_carac_after_open_bracket(str) == 84, "verif_mult_bracket failed");
}

Test(verif_carac_bracket, verif_div_bracket)
{
	char	str[] = "2321(/21)";
	cr_expect(verif_carac_after_open_bracket(str) == 84, "verif_div_bracket failed");
}

Test(verif_carac_bracket, verif_mod_bracket)
{
	char	str[] = "98%(%21-4)";
	cr_expect(verif_carac_after_open_bracket(str) == 84, "verif_mod_bracket failed");
}

Test(verif_carac_bracket, verif_sub_bracket)
{
	char	str[] = "890+(-60*4)";
	cr_expect(verif_carac_after_open_bracket(str) == 0, "verif_sub_bracket failed");
}

Test(verif_carac_bracket, verif_add_bracket)
{
	char	str[] = "821/6(+44-3)/7";
	cr_expect(verif_carac_after_open_bracket(str) == 0, "verif_add_bracket failed");
}

Test(verif_carac_bracket, verif_close_bracket)
{
	char	str[] = "321()-6";
	cr_expect(verif_carac_after_open_bracket(str) == 84, "verif_close_bracket failed");
}

Test(verif_carac_bracket, verif_open_bracket)
{
	char	str[] = "728((-55+4)-3)-8";
	cr_expect(verif_carac_after_open_bracket(str) == 0, "verif_open_bracket failed");
}

Test(verif_carac_bracket, verif_classic)
{
	char	str[] = "2317(-22/3)+(+32/6)*4";
	cr_expect(verif_carac_after_open_bracket(str) == 0, "verif_classic failed");
}
