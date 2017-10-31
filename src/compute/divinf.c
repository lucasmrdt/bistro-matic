/*
** EPITECH PROJECT, 2017
** div inf
** File description:
** div inf
*/


#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

int	r_divinf(char *s1, char *s2, char *n, char *q);

char	*divinf(char *s1, char *s2)
{
	char	*n;
	char	*q;
	int	length_s1 = my_strlen(s1);
	int	length_s2 = my_strlen(s2);

	n = malloc(sizeof(char) * (length_s2 + 1));
	n[0] = '\0';
	q = malloc(sizeof(char) * (length_s1 + 1));
	q[0] = '\0';
	r_divinf(s1, s2, n, q);
	return (q);
}

int	r_divinf(char *s1, char *s2, char *n, char *q)
{
	int	qtmp = 0;
	int	run = 1;

	if (!*s1)
		return (0);
	while (compare_str(n, s2) < 0 && *s1 && run) {
		n[my_strlen(n)] = *s1;
		s1++;
		if (*q)
			run = 0;
	}
	while(compare_str(n, s2) >= 0) {
		n = subinf(n, s2);
		my_revstr(s2);
		qtmp++;
	}
	if (n[0] == '0')
		n[0] = '\0';
	q[my_strlen(q)] = qtmp + '0';
	return (r_divinf(s1, s2, n, q));
}
