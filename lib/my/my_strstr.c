/*
** EPITECH PROJECT, 2017
** my_strstr
** File description:
** task04
*/

int	my_strlen(char const *);

char const	*my_strstr(char const *str, char const *to_find)
{
	unsigned int	i = 0;
	unsigned int	j = 0;
	unsigned int	length;

	length = my_strlen(to_find);
	while (str[i] != '\0') {
		if (str[i] == to_find[j])
			j++;
		else if (length == j)
			return (&str[i - j]);
		else
			j = 0;
		i++;
	}
	return (0);
}
