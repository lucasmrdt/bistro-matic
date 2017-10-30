/*
** EPITECH PROJECT, 2017
** compare_str.c
** File description:
** compare two str
*/

char	compare_str(char *s1, char *s2)
{
	int	i = -1;

	if (my_strlen(s1) < my_strlen(s2))
		return (0);
	while (s1[++i] && s2[i])
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	return (s1[i] - s2[i]);
}
