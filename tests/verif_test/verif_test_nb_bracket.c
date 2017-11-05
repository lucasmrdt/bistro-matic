/*
** EPITECH PROJECT, 2017
** verif test nb bracket
** File description:
** verif nb bracket
*/

#include <criterion/criterion.h>
#include "my.h"
#include "bistromatic.h"

int	verif_nb_bracket(char *str);

Test(verif_nb_bracket, verif_single_open_bracket)
{
	char	str[] = "321(-77";
	cr_expect(verif_nb_bracket(str) == 84, "verif_single_op_bracket failed");
}

Test(verif_nb_bracket, verif_single_close_bracket)
{
	char	str[] = "217)+33";
	cr_expect(verif_nb_bracket(str) == 84, "verif_single_close bracket failed");
}

Test(verif_nb_bracket, verif_3_bracket)
{
	char	str[] = "829(62-4))";
	cr_expect(verif_nb_bracket(str) == 84, "verif 3 bracket failed");
}

Test(verif_nb_bracket, verif_3_bracket_bis)
{
	char	str[] = "98765-((+78-32)";
	cr_expect(verif_nb_bracket(str) == 84, "verif 3 bracket bis failed");
}

Test(verif_nb_bracket, verif_2_bracket)
{
	char	str[] = "9876-2412+(2312/32)";
	cr_expect(verif_nb_bracket(str) == 0, "verif 2 brackets failed");
}

Test(verif_nb_bracket, verif_4_bracket)
{
	char	str[] = "312-((77+32)-4)";
	cr_expect(verif_nb_bracket(str) == 0, "verif 4 brackets failed");
}

Test(verif_nb_bracket, no_bracket)
{
	char	str[] = "768+77";
	cr_expect(verif_nb_bracket(str) == 0, "verif no bracket failed");
}
