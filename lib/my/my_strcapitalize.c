/*
** EPITECH PROJECT, 2017
** my_strcapitalize.c
** File description:
** TASK09
*/

char	*my_strlowcase(char *str);

int	is_separator(char c)
{
	if (c > 29 && c < 47)
		return (1);
	return (0);
}

char	*my_strcapitalize(char *str)
{
	unsigned int	i = 0;
	unsigned int	is_new_word = 1;
	unsigned int	i_pre_char;

	my_strlowcase(str);
	while (str[i] != '\0') {
		i_pre_char = (i ? i - 1 : 0);
		if (is_separator(str[i_pre_char]))
			is_new_word = 1;
		if (str[i] > 96 && str[i] < 123 && is_new_word) {
			str[i] -= 32;
		}
		is_new_word = 0;
		i++;
	}
	return (str);
}
