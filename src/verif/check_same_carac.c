/*
** EPITECH PROJECT, 2017
** check base and ops
** File description:
** check if base and ops haven't same caracs
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

int	same_carac(char *str)
{
	unsigned	i = 0;
	unsigned	j = 0;

	while (str[i]) {
		while (str[i] != str[j] && i != j && str[j])
			j++;
		if (str[j] && str[i] == str[j] && i != j)
			display_error(SYNTAX_ERROR_MSG);
		j = 0;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	str[] = "0123456789AZERTYUIOPQSDFGHJKLMWXCVBN";
	same_carac(str);
}
