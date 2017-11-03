/*
** EPITECH PROJECT, 2017
** get_nbr_elem
** File description:
** file
*/

#include "bistromatic.h"

stack_elem_t	*get_nbr_elem(char **str)
{
	stack_elem_t	*nbr;
	char		sign;
	char		*value  = get_nbr(str, &sign);
	int		length = my_strlen(value);

	nbr = malloc(sizeof(*nbr));
	if (!nbr)
		exit(EXIT_MALLOC);
	nbr->value = malloc(sizeof(char) * (length + 1));
	nbr->value = value;
	nbr->sign = sign;
	return (nbr);
}