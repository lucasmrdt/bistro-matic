/*
** EPITECH PROJECT, 2017
** div inf
** File description:
** div inf
*/

#include <stdlib.h>
#include <string.h>
#include "my.h"
#include "bistromatic.h"

char	*r_divinf(char *s1, char *s2, char *n, char *q);

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
	if (n[0] == '0')
		n[0] = '\0';
	q[my_strlen(q)] = BASE[qtmp];
	return (r_divinf(s1, s2, n, q));
}
