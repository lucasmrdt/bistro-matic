/*
** EPITECH PROJECT, 2017
** my_memset
** File description:
** file
*/

void	my_memset(char *result, char c, int length)
{
	int	i = 0;

	while (i < length + 1) {
		result[i] = c;
		i++;
	}
}
