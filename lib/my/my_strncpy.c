/*
** EPITECH PROJECT, 2017
** my_strncpy.c
** File description:
** TASK02
*/

char	*my_strncpy(char *dest, char const *src, int n)
{
	int	i = 0;

	while (i <= n) {
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
