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

Test(verif_nb_bracket, verif_single_op_bracket)
{
	char	str[] = "321(-77";
	cr_expect(verif_nb_bracket(str) == 84, "verif_single_op_bracket failed");
}
