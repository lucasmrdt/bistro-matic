/*
** EPITECH PROJECT, 2017
** parse_tools
** File description:
** file
*/

#include "bistromatic.h"

int	add_next_nb_and_op(char **str)
{
	char	*tmp;
	char	op;
	char	sign;
	int	loop = 1;

	sign = (is_negative((*str)++) ?
		OPS[OP_NEG_IDX] : OPS[OP_PLUS_IDX]);
	tmp = *str;
	while (*tmp && loop) {
		if (*tmp == BASE[0]) {
			tmp++;
		}
		else if (is_operator(*tmp)) {
			op = *tmp;
			*tmp = '\0';
			add_op(op, get_weight(op));
			loop = 0;
		}
		tmp++;
	}
	add_number(*str, sign);
	*str = tmp;
}
