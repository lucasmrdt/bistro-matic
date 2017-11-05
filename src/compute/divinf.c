/*
** EPITECH PROJECT, 2017
** div inf
** File description:
** div inf
*/

#include <stdlib.h>
#include "my.h"
#include "bistromatic.h"

char	*r_divinf(char *s1, char *s2, char *n, char *q);

char	*divinf(char *s1, char *s2)
{
	char	*n;
	char	*q;
	int	length_s1 = my_strlen(s1);

	n = malloc(sizeof(char) * (length_s1 + 1));
	q = malloc(sizeof(char) * (length_s1 + 1));
	my_memset(n, '\0', length_s1 + 1);
	my_memset(q, '\0', length_s1 + 1);
	r_divinf(s1, s2, n, q);
	return (q);
}

char	*r_divinf(char *s1, char *s2, char *n, char *q)
{
	int	qtmp = 0;
	int	run = 1;
	int	length;

	if (!*s1) {
		q[my_strlen(q)] = '\0';
		return (n);
	}
	while (compare_str(n, s2) < 0 && *s1 && run) {
		length = my_strlen(n);
		n[length] = *s1;
		s1++;
		if (*q)
			run = 0;
	}
	while(compare_str(n, s2) >= 0) {
		n = subinf(n, s2);
		my_revstr(s2);
		qtmp++;
	}
	q[my_strlen(q)] = BASE[qtmp];
	return (r_divinf(s1, s2, n, q));
}
