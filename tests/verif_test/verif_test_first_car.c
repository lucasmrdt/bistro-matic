/*
** EPITECH PROJECT, 2017
** verif test
** File description:
** verif test
*/

#include <criterion/criterion.h>
#include "my.h"
#include "bistromatic.h"

int	verif_first_carac(char *str);

Test(verif_first_carac, verif_mult)
{
	char	str[] = "*323121";
	cr_expect(verif_first_carac(str) == 84, "verif_mult failed");
}

Test(verif_first_carac, verif_div)
{
	char	str[] = "/9832+32";
	cr_expect(verif_first_carac(str) == 84, "verif_div failed");
}

Test(verif_first_carac, verif_mod)
{
	char	str[] = "%3218+321";
	cr_expect(verif_first_carac(str) == 84, "verif_mod failed");
}

Test(verif_first_carac, verif_add)
{
	char	str[] = "+323-22";
	cr_expect(verif_first_carac(str) == 0, "verif_add failed");
}

Test(verif_first_carac, verif_sub)
{
	char	str[] = "-39721/52";
	cr_expect(verif_first_carac(str) == 0, "verif_sub failed");
}

Test(verif_first_carac, verif_open_bracket)
{
	char	str[] = "(+3763/83)-9";
	cr_expect(verif_first_carac(str) == 0, "verif_open_bracket failed");
}

Test(verif_first_carac, verif_close_bracket)
{
	char	str[] = ")-63/2+932";
	cr_expect(verif_first_carac(str) == 84, "verif_close_bracket failed");
}
