/*
** EPITECH PROJECT, 2017
** infinadd
** File description:
** sub with infinite numbers
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

int	r_subinf(char *s1, char *s2, char *result, int rest);

/*
** subinf function, s1 > s2 and the result is return in a string.
*/
char	*subinf(char *s1, char *s2)
{
	char	*result;
	int	length_s1 = my_strlen(s1) * 2;
	int	length;

	result = malloc(sizeof(char) * (length_s1 + 1));
	if (!result)
		return (NULL);
	my_memset(result, 0, length_s1);
	my_revstr(s1);
	my_revstr(s2);
	r_subinf(s1, s2, result, 0);
	length = my_strlen(result);
	while (result[--length] == BASE[0] && length)
		result[length] = 0;
	my_revstr(result);
	return (result);
}

/*
** Recursive function for subinf.
*/
int	r_subinf(char *s1, char *s2, char *res_computed, int rest)
{
	int	base_length = my_strlen(BASE);
	int	n1 = (*s1 ? indexof(BASE, *s1) : 0);
	int	n2 = (*s2 ? indexof(BASE, *s2) + rest : rest);
	int	unit;

	if (!*s1) {
		*res_computed = 0;
		return (0);
	}
	if (*s2)
		s2++;
	s1++;
	rest = (n2 > n1 ? 1 : 0);
	unit = n1 + rest * base_length - n2;
	*res_computed = BASE[unit];
	return (r_subinf(s1, s2, ++res_computed, rest));
}
