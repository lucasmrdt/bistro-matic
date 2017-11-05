/*
** EPITECH PROJECT, 2017
** get_nbr
** File description:
** file
*/

#include <stdlib.h>
#include <stdbool.h>
#include "bistromatic.h"

char	*fill_nbr(char *tmp, int length);

char	*get_nbr(char **str, char *sign)
{
	char	*nbr;
	char	*tmp = *str;
	bool	loop = true;
	int	nb_neg_sign = 0;
	int	length = 0;
	char	op;

	while (!is_high_op(**str) && loop && **str) {
		if (is_low_op(**str)) {
			if (length) {
				loop = false;
				(*str)--;
			}
			else if(**str == OPS[OP_NEG_IDX]) {
				nb_neg_sign++;
			}
		}
		else if (is_nbr(**str)) {
			length++;
		}
		(*str)++;
	}
	op = **str;
	**str = 0;
	nbr = fill_nbr(tmp, length);
	*sign = (nb_neg_sign % 2 ? OPS[OP_NEG_IDX] : OPS[OP_PLUS_IDX]);
	**str = op;
	if (!length)
		add_op(get_elem_op(*sign));
	return (nbr);
}

char	*fill_nbr(char *str, int length)
{
	int	i = 0;
	bool	number_is_begin = false;
	char	*nbr;

	nbr = malloc(sizeof(char) * (length + 1));
	my_memset(nbr, 0, length);
	if (!nbr)
		exit(EXIT_MALLOC);
	while (*str) {
		if (is_nbr(*str)) {
			if (!number_is_begin && *str != BASE[0]) {
				number_is_begin = true;
			}
			if (number_is_begin) {
				nbr[i] = *str;
				i++;
			}
		}
		str++;
	}
	if (!nbr[0])
		nbr[0] = BASE[0];
	nbr[++i] = 0;
	return (nbr);
}