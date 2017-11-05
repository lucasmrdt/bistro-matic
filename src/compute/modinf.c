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

char	*modinf(char *s1, char *s2)
{
	char	*n;
	char	*q;
	int	length_s1 = my_strlen(s1);
	int	length_s2 = my_strlen(s2);

	n = malloc(sizeof(char) * (length_s1 + 1));
	q = malloc(sizeof(char) * (length_s1 + 1));
	my_memset(n, '\0', length_s1);
	my_memset(q, '\0', length_s1);
	n = r_divinf(s1, s2, n, q);
	if (n[0] == '\0')
		n[0] = BASE[0];
	return (n);
}
