/*
** EPITECH PROJECT, 2017
** my_strncmp.c
** File description:
** TASK05
*/

int	my_strncmp(char const *s1, char const *s2, int n)
{
	unsigned int	size1 = 0;
	unsigned int	size2 = 0;
	int	i = 0;

	while (i < n) {
		size1 += s1[i];
		size2 += s2[i];
		i++;
	}
	return (size1 - size2);
}
