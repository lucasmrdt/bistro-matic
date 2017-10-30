/*
** EPITECH PROJECT, 2017
** my_strcat
** File description:
** concatenates two strings
*/

int	my_strlen(char const *);

char	*my_strcat(char *dest, char const *src)
{
	unsigned int	length = my_strlen(dest);
	unsigned int	i = 0;

	while (src[i] != '\0') {
		dest[length + i] = src[i];
		i++;
	}
	dest[length + i] = '\0';
	return (dest);
}
