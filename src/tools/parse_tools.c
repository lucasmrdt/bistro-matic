/*
** EPITECH PROJECT, 2017
** parse_tools
** File description:
** file
*/

#include "my.h"
#include "bistromatic.h"

int	add_next_nb_and_op(char **str)
{
	char	*tmp = *str;
	char	op;
	char	sign;

	sign = get_sign(tmp);
	while (*tmp) {
		if (*tmp == BASE[0]) {
			(*str)++;
		}
		if (**str == '-' && !nb) {
			sign *= -1;
		}
		else if (is_operator(**str)) {
			op = **str;
			**str = '\0';
			add_number()
			return (nb * sign);
		}
		else {
			nb *= 10;
			nb += **str - 48;
		}
		(*str)++;
	}
	return (nb);
}

char	get_sign(char *str)
{
	if (*str == OP[3] && *(str - 1) == OP[0])
		return (OP[3]);
	return (OP[2]);
}