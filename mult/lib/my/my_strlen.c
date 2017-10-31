/*
** EPITECH PROJECT, 2017
** my_strlen
** File description:
** return length of string
*/

int	my_strlen(char const *str)
{
	unsigned int	i = 0;

	while (str[i])
		i++;
	return (i);
}