/*
** EPITECH PROJECT, 2017
** get_nbr
** File description:
** file
*/

#include "bistromatic.h"

// -+666+7364
// -(-(-7))
// -(-++--(7))

char	*get_nbr(char **str, char *sign)
{
	char	*nbr;
	char	*tmp = *str;
	bool	loop = true;
	int	nb_neg_sign = 0;
	int	length = 0;
	char	op;

	while (!is_op(**str) && loop) {
		if (is_low_op(**str))
			if (length)
				loop = false;
			else if(**str == OPS[OP_NEG_IDX])
				nb_neg_sign++;
		else if (is_nbr(**str))
			length++;
		*str++;
	}
	op = **str;
	**str = 0;
	nbr = malloc(sizeof(char) * (length + 1));
	fill_nbr(tmp, nbr);
	*sign = (nb_neg_sign % 2 ? '-' : '+');
	**str = op;
	return (nbr);
}

void	fill_nbr(char *tmp, char *nbr)
{
	int	i = 0;

	while (*tmp) {
		if (is_nbr(*tmp)) {
			nbr[i] = *tmp;
			i++;
		}
		tmp++;
	}
	nbr[i] = 0;
}