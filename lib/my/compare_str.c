/*
** EPITECH PROJECT, 2017
** compare_str.c
** File description:
** compare two str
*/

int	my_strlen(char *str);
int	indexof(char *arr, char c);

char	compare_str(char *s1, char *s2, char *arr)
{
	int	i = -1;
	int	length1 = my_strlen(s1);
	int	length2 = my_strlen(s2);

	if (my_strlen(s1) != my_strlen(s2))
		return (length1 - length2);
	while (s1[++i] && s2[i])
		if (s1[i] != s2[i])
			return (indexof(arr, s1[i]) - indexof(arr, s2[i]));
	return (indexof(arr, s1[i]) - indexof(arr, s2[i]));
}
