/*
** EPITECH PROJECT, 2017
** addinf
** File description:
** add with infinite numbers
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

int	r_addinf(char *s1, char *s2, char *result, int rest);

char	*addinf(char *s1, char *s2)
{
	char	*result;
	int	length_s1 = my_strlen(s1);

	result = malloc(sizeof(char) * (length_s1 + 2));
	if (!result)
		return (NULL);
	s1 = my_revstr(s1);
	s2 = my_revstr(s2);
	r_addinf(s1, s2, result, 0);
	my_revstr(result);
	while (*result == BASE[0] && *result)
		result++;
	return (result);
}

int	r_addinf(char *s1, char *s2, char *result, int rest)
{
	int	n1 = (*s1 ? indexof(BASE, *s1) : 0);
	int	n2 = (*s2 ? indexof(BASE, *s2) : 0);
	int	res_sum = n1 + n2 + rest;
	int	unit = res_sum % BASE_LENGTH;

	if (!*s1 && !*s2 && !rest){
		*result = '\0';
		return (0);
	}
	if (*s1)
		s1++;
	if (*s2)
		s2++;
	rest = res_sum / BASE_LENGTH % BASE_LENGTH;
	*result = BASE[unit];
	return (r_addinf(s1, s2, ++result, rest));
}