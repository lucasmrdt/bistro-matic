/*
** EPITECH PROJECT, 2017
** addinf
** File description:
** add with infinite numbers
*/

#include <stdlib.h>
#include "my.h"

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
	return (my_revstr(result));
}

int	r_addinf(char *s1, char *s2, char *result, int rest)
{
	unsigned int	n1 = (*s1 ? *s1 - 48 : 0);
	unsigned int	n2 = (*s2 ? *s2 - 48 : 0);
	unsigned int	res_sum = n1 + n2 + rest;
	unsigned int	unit = res_sum % 10;

	if (!*s1 && !*s2 && !rest){
		*result = '\0';
		return (0);
	}
	if (*s1)
		s1++;
	if (*s2)
		s2++;
	rest = res_sum / 10 % 10;
	*result = unit + 48;
	return (r_addinf(s1, s2, ++result, rest));
}