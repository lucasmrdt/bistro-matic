/*
** EPITECH PROJECT, 2017
** infinadd
** File description:
** sub with infinite numbers
*/

#include <stdlib.h>
#include "my.h"

int	r_subinf(char *s1, char *s2, char *result, int rest);

char	*subinf(char *s1, char *s2)
{
	char	*result;
	int	length_s1 = my_strlen(s1);

	result = malloc(sizeof(char) * (length_s1 + 1));
	if (!result)
		return (NULL);
	s1 = my_revstr(s1);
	s2 = my_revstr(s2);
	r_subinf(s1, s2, result, 0);
	return (my_revstr(result));
}


int	r_subinf(char *s1, char *s2, char *res_computed, int rest)
{
	unsigned int	n1 = (*s1 ? *s1 - 48 : 0);
	unsigned int	n2 = (*s2 ? *s2 + rest - 48 : rest);
	unsigned int	unit;

	if (!*s1)
		return (0);
	if (*s2)
		s2++;
	s1++;
	rest = (n2 > n1 ? 1 : 0);
	unit = n1 + rest * 10 - n2;
	*res_computed = unit + 48;
	return (r_subinf(s1, s2, ++res_computed, rest));
}