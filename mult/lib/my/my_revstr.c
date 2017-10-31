/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** TASK03
*/

int	my_strlen(char const *);

char	*my_revstr(char *str)
{
	unsigned int	i = 0;
	unsigned int	i_max;
	char	temp_char;

	i_max = my_strlen(str);
	while (i < i_max / 2) {
		temp_char = str[i];
		str[i] = str[i_max - 1 - i];
		str[i_max - 1 - i] = temp_char;
		i++;
	}
	return (str);
}
