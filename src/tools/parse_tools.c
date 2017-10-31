/*
** EPITECH PROJECT, 2017
** parse_tools
** File description:
** file
*/

#include "my.h"
#include "evalexpr.h"

int	get_number(char **str)
{
	int	nb = 0;
	int	sign = 1;

	while (**str) {
		if (**str == '-' && !nb) {
			sign *= -1;
		}
		else if (**str < '0' || **str > '9') {
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

int	is_operator(char c)
{
	int	i = -1;

	while (OPS[++i])
		if (c == OPS[i])
			return (1);
	return (0);
}

int	is_negative_number(char *str)
{
	if (*str == '-' && *(str - 1) == '(')
		return (1);
	return (0);
}