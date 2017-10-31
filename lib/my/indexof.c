/*
** EPITECH PROJECT, 2017
** converting_base.c
** File description:
** file
*/

int	indexof(char *arr, char c)
{
	int	i = 0;

	while (arr[i] != c && arr[i])
		i++;
	return (i);
}