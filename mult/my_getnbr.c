/*
** EPITECH PROJECT, 2017
** my_getnbr
** File description:
** getnbr
*/

#include <stdio.h>

int my_getnbr(char *str)
{
	int value = 0;
	int neg = 0;
	unsigned int j = 0;
	unsigned int i = 0;

	while (str[i] < '0' || str[i] > '9') {
		if (str[i] == '-')
			neg = neg + 1;
		i = i + 1;
	}
	while (str[i] >= '0' && str[i] <= '9'){
		value = (value * 10) + (str[i] - 48);
		if (j > 9)
			return (0);
		i = i + 1;
		j = j + 1;
	}
	if (neg % 2 == 0)
		neg = 1;
	else
		neg = -1;
	value = (value * (neg));
	return (value);
}
