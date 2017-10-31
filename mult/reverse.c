/*
** EPITECH PROJECT, 2017
** reverse a string 
** File description:
** 
*/

#include <stdlib.h>

int my_strlen(char *);

char *reverse(char *str)
{
	int length = my_strlen(str);
	char *copy;
	int i = 0;
	int k = 0;

	copy = malloc(sizeof(char) * (length + 1));
	while (str[i + 1])
		i += 1;
	while (i >= 0) {
		copy[k] = str[i];
		i -= 1;
		k += 1; 
	}
	copy[k] = '\0';
	return (copy);
	
}

		
