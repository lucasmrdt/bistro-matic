/*
** EPITECH PROJECT, 2017
** my_strupcase.c
** File description:
** task07
*/

char	*my_strupcase(char *str)
{
	unsigned int	i = 0;

	while (str[i] != '\0') {
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
