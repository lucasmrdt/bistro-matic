/*
** EPITECH PROJECT, 2017
** check_syntax
** File description:
** check syntax with all verif
*/

#include "my.h"
#include "bistromatic.h"
#include <stdlib.h>

int	check_char_base(char *str);
int	verif_bracket_after_op(char *str);
int	verif_doublecarac(char *str);
int	verif_first_carac(char *str);
int	verif_last_carac(char *str);
int	verif_nb_bracket(char *str);
int	verif_parenthese_number(char *str);

int	check_syntax(char *str)
{
//	check_char_base(str);
	verif_bracket_after_op(str);
	verif_doublecarac(str);
	verif_first_carac(str);
	verif_last_carac(str);
	verif_nb_bracket(str);
	verif_parenthese_number(str);
	return (0);
}

int	main(void)
{
	char	*str = "3231";
	check_syntax(str);
}
