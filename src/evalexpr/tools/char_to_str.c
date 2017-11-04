/*
** EPITECH PROJECT, 2017
** char_to_str
** File description:
** file
*/

#include <stdlib.h>
#include "bistromatic.h"

char	*char_to_str(char c)
{
	char	*str;

	str = malloc(sizeof(char) * 2);
	if (!str)
		exit(EXIT_MALLOC);
	str[0] = c;
	str[1] = 0;
	return (str);
}