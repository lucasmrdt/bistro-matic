/*
** EPITECH PROJECT, 2017
** verif
** File description:
** file
*/

#include "bistromatic.h"

void	verif_error(char *str)
{
	int	i;

	while (*str) {
		i = -1;
		while (VERIF_ARR[i])
			VERIF_ARR[i](str);
		str++;
	}
}