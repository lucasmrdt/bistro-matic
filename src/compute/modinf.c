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

int	r_modinf(char *s1, char *s2, char *n, char *q);

char	*modinf(char *s1, char *s2)
{
	char	*n;
	char	*q;
	int	length_s1 = my_strlen(s1);
	int	length_s2 = my_strlen(s2);

	n = malloc(sizeof(char) * (length_s2 + 1));
	n[0] = '\0';
	q = malloc(sizeof(char) * (length_s1 + 1));
	q[0] = '\0';
	n = r_divinf(s1, s2, n, q);
	return (n);
}
