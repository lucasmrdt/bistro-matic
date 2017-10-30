/*
** EPITECH PROJECT, 2017
** converting_base.c
** File description:
** file
*/

int	indexof(char *str, char c)
{
	int	i = 0;

	while (str[i] != c && str[i])
		i++;
	return (i);
}