/*
** EPITECH PROJECT, 2017
** function
** File description:
** file
*/

#include <stdlib.h>
#include "my.h"
#include "evalexpr.h"

int	is_operator(char c)
{
	int	i = -1;

	while (ops[++i])
		if (c == ops[i])
			return (1);
	return (0);
}

int	is_negative_number(char *str)
{
	if (*str == '-' && *(str - 1) == '(')
		return (1);
	return (0);
}

int	get_weight(char op)
{
	int	i = -1;

	while (ops[++i])
		if (ops[i] == op)
			return (i < 2 ? 3 : i < 4 ? 1 : 2);
	return (0);
}

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