/*
** EPITECH PROJECT, 2017
** mult_inf 
** File description:
** mult_inf for bistromatic 
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"
#include "bistromatic.h"

char	*my_revstr(char *);
int	r_multinf(char *s1, char s2, char *tmp, int rest);

char	*multinf(char *s1, char *s2)
{
	int i = 0;
	char *result;
	char *stock;
	char *tmp;

	my_revstr(s1);
	my_revstr(s2);
	tmp = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1)); 
	result = malloc(sizeof(char) * (my_strlen(s1) + my_strlen(s2) + 1));
	while (s2[i]) {
		r_multinf(s1, s2[i], tmp + i, 0);
		result = addinf(result, tmp);
		i += 1;
	}
	return (result); 
}

int	r_multinf(char *s1, char s2, char *tmp, int rest)
{
	int base_length = my_strlen(BASE);
	int n1 = (*s1 ? indexof(BASE, *s1) : 0);
	int n2 = s2 - 48;
	int res_mul = (n1 * n2) + rest; 
	int unit = res_mul % 10;

	if (!*s1 && !rest) {
		*tmp = '\0';
		return (0);
	}
	if (*s1)
		s1++; 
	rest = (res_mul / 10) % (10);
	*tmp = BASE[unit];
	return (r_multinf(s1, s2, ++tmp, rest)); 
}
