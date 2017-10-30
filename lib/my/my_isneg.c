/*
** EPITECH PROJECT, 2017
** my_isneg.c
** File description:
** Function that displays either N or P relative to input sign.
*/

#include <unistd.h>

int	my_isneg(int n)
{
	char	output;

	if (n < 0) {
		output = 'N';
	} else {
		output = 'P';
	}
	write(1, &output, 1);
	return (0);
}
