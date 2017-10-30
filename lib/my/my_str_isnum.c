/*
** EPITECH PROJECT, 2017
** my_str_isalpha
** File description:
** task10
*/

int	my_str_isnum(char const *str)
{
	unsigned int	i = 0;
	while (str[i]) {
		if((str[i] < '0' || str[i] > '9') && str[i] != '-')
			return (0);
		i++;
	}
	return (1);
}
