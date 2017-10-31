/*
** EPITECH PROJECT, 2017
** my_strdup
** File description:
** TASK01
*/

#include <stdlib.h>

char	*my_strcpy(char *dest, const char *src);
int	my_strlen(char const *str);

char	*my_strdup(char const *src)
{
	char	*dest;
	int	length;

	length = my_strlen(src);
	dest = malloc(sizeof(char) * (length + 1));
	my_strcpy(dest, src);
	return (dest);
}
