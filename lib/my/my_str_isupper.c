/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** task10
*/

int	my_str_isupper(char const *str)
{
	unsigned int	i = 0;
	while (str[i] != '\0') {
		if(str[i] < 65 || str[i] > 90)
			return (0);
		i++;
	}
	return (1);
}
