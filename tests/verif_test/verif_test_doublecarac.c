/*
** EPITECH PROJECT, 2017
** verif test double carac
** File description:
** verif test double carac
*/

#include <criterion/criterion.h>
#include "my.h"
#include "bistromatic.h"

int	verif_doublecarac(char *str);

Test(verif_double_carac, verif_mult_add)
{
	char	str[] = "3*+32";
	cr_expect(verif_doublecarac(str) == 0, "verif_mult_add failed");
}

Test(verif_double_carac, verif_div_sub)
{
	char	str[] = "932*-6";
	cr_expect(verif_doublecarac(str) == 0, "verif_div_sub failed");
}

Test(verif_double_carac, verif_add_mod)
{
	char	str[] = "908+%3";
	cr_expect(verif_doublecarac(str) == 84, "verif_add_mod failed");
}

Test(verif_double_carac, verif_div_mult)
{
	char	str[] = "870/%32+3";
	cr_expect(verif_doublecarac(str) == 84, "verif_div_mod failed");
}

Test(verif_double_carac, verif_add_bracket)
{
	char	str[] = "80743+(-23)";
	cr_expect(verif_doublecarac(str) == 0, "verif_add_bracket failed");
}

Test(verif_double_carac, verif_add_sub)
{
	char	str[] = "087+-32";
	cr_expect(verif_doublecarac(str) == 0, "verif_add_sub failed");
}

Test(verif_double_carac, verif_sub_mult)
{
	char	str[] = "43027-%388";
	cr_expect(verif_doublecarac(str) == 84, "verif_sub_mult failed");
}

Test(verif_double_carac, verif_mult_sub)
{
	char	str[] = "437*-132";
	cr_expect(verif_doublecarac(str) == 0, "verif_mult_sub failed");
}

Test(verif_double_carac, verif_sub_sub)
{
	char	str[] = "687--77";
	cr_expect(verif_doublecarac(str) == 0, "verif_sub_sub failed");
}
Test(verif_double_carac, verif_classique)
{
	char	str[] = "9789-231+32%4-2*1";
	cr_expect(verif_doublecarac(str) == 0, "verif_classique failed");
}
