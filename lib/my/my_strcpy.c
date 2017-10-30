/*
** EPITECH PROJECT, 2017
** my_strcpy.c
** File description:
** TASK01
*/

char	*my_strcpy(char *dest, const char *src)
{
	unsigned int	i = 0;

	while (src[i]) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
