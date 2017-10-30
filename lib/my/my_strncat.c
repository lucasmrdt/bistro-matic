/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** concatenates two strings
*/

int	my_strlen(char const *);

char	*my_strncat(char *dest, char const *src, int nb)
{
	unsigned int	length = my_strlen(dest);
	int	i = 0;

	while (i < nb) {
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
