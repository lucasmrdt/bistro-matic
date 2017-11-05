/*
** EPITECH PROJECT, 2017
** mul_inf
** File description:
** mul_inf for bistromatic
*/
 
#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"
 
char	*my_revstr(char *);
int	r_mulinf(char *s1, char s2, char *tmp, int rest);
 
char	*mulinf(char *s1, char *s2)
{
	int	i = 0;
	char	*result;
	char	*tmp;
 
	my_revstr(s1);
	my_revstr(s2);
	tmp = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
	result = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
	my_memset(result, 0, my_strlen(s1) + my_strlen(s2) + 1);
	my_memset(tmp, 0, my_strlen(s1) + my_strlen(s2) + 1);
	while (s2[i]) {
		r_mulinf(s1, s2[i], tmp + i, 0);
		tmp = my_revstr(tmp);
		result = addinf(tmp, result);
		while (*result == '0' && *(result + 1))
			result++;
		tmp[i] = '0';
		i++;
	}
	if (!*result)
		*result = '0';
	return (result);
}
 
int	r_mulinf(char *s1, char s2, char *tmp, int rest)
{
	int	n1 = (*s1 ? indexof(BASE, *s1) : 0);
	int	n2 = indexof(BASE, s2);
	int	res_mul = (n1 * n2) + rest;
	int	unit = res_mul % BASE_LENGTH;

	if (!*s1 && !rest) {
		*tmp = '\0';
		return (0);
	}
	if (*s1)
		s1++;
	rest = res_mul / BASE_LENGTH % BASE_LENGTH;
	*tmp = BASE[unit];
	return (r_mulinf(s1, s2, ++tmp, rest));
}
