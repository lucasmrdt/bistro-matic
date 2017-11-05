/*
** EPITECH PROJECT, 2017
** get_nbr_elem
** File description:
** file
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

stack_elem_t	*get_elem_nbr(char **str)
{
	stack_elem_t	*nbr;
	char	sign;
	char	*value = get_nbr(str, &sign);
	int	length = my_strlen(value);

	nbr = malloc(sizeof(*nbr));
	if (!nbr)
		exit(EXIT_MALLOC);
	nbr->value = malloc(sizeof(char) * (length + 1));
	nbr->value = value;
	nbr->sign = sign;
	return (nbr);
}
