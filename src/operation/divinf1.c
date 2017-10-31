/*
** EPITECH PROJECT, 2017
** divinf
** File description:
** divinf.c
*/

#include <stdio.h>
#include "my.h"
#include "bistromatic.h"

//char	*compare_str(char *s1, char *s2);
//char	*convert(int q);
//int	my_strlen(char const *s1);

char	*divinf(char *s1, char *s2)
{
	unsigned int	q = 0;

	printf("%s\n", "Flemme");
	my_strlen(s1);
/*	while (compare_str(s1, s2) > 0) {
		q++;
		printf("%s\n", "Signaler");
		printf("res : %s\n", subinf(s1, s2));
		return;
		printf("%s\n" , "Daaaamnit");
	}
	return (convert(q));*/
}

char	*convert(int q)
{
/*	unsigned int	i = 0;
	char	*quotient;

	while (q) {
		quotient[i] = q % 10;
		q /= 10;
		i++;
	}
	printf("%s\n", "Bonne soriée");
	my_revstr(quotient);
	printf("%s\n", quotient);
	printf("%s\n", "A32321");
	return (quotient);*/
}

int	main(void)
{
	char	*s1 = "12322";
	char	*s2 = "121";

	divinf(s1, s2);
	printf("%s\n", "AAA");
	return (0);
}
