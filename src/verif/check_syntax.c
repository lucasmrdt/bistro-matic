/*
** EPITECH PROJECT, 2017
** verif
** File description:
** file
*/

#include "bistromatic.h"

void	check_error(char *str)
{
	int	i;
	int	nb_brackets = 0;

	check_first_char(*str);
	while (*str) {
		i = -1;
		while (VERIF_ARR[++i])
			VERIF_ARR[i](str);
		if (*str == OPS[OP_OPEN_PARENT_IDX])
			nb_brackets++;
		else if (*str == OPS[OP_CLOSE_PARENT_IDX])
			nb_brackets--;
		str++;
	}
	check_last_char(*(str - 1));
	if (nb_brackets)
		display_error(SYNTAX_ERROR_MSG);	
}