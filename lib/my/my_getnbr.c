/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** return nbr sended by a string
*/

#include <limits.h>
#include <stdbool.h>

int	new_nbr_isint(int nbr, int unit)
{
	unsigned int	new_nbr = (unsigned)nbr;

	new_nbr *= 10;
	new_nbr += unit - 48;
	if (new_nbr > INT_MAX)
		return (false);
	return (true);
}

int	new_nbr_issigned(char const *str, int begin_index)
{
	if (begin_index - 1 < 0)
		return (false);
	if (str[begin_index - 1] != '-')
		return (false);
	return (true);
}

int	my_char_isnum(char c)
{
	if (c >= '0' && c <= '9')
		return (true);
	return (false);
}

int	my_getnbr(char const *str)
{
	unsigned int	begin_index;
	unsigned int	i = 0;
	bool		is_endend = false;
	int		nbr = 0;

	while (str[i] && !is_endend) {
		if (my_char_isnum(str[i])) {
			if (!nbr)
				begin_index = i;
			if (!new_nbr_isint(nbr, str[i]))
				return (0);
			nbr *= 10;
			nbr += str[i] - 48;
		}
		else if (nbr)
			is_endend = true;
		i++;
	}
	return (new_nbr_issigned(str, begin_index) ? -nbr : nbr);
}