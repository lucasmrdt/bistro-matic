/*
** EPITECH PROJECT, 2017
** my_str_to_word_array
** File description:
** TASK04
*/

#include <stdlib.h>

int	my_isalphanumeric(char);

int	get_nbr_sep(char const *str)
{
	unsigned int	i = 0;
	unsigned int	nb_sep = 0;

	while (str[i]) {
		if (!my_isalphanumeric(str[i]))
			nb_sep++;
		i++;
	}
	return (nb_sep);
}

void	get_words_length(unsigned int *words_length, char const *str, int nb_sep)
{
	int		i = 0;
	int		j = 0;

	while (i < nb_sep + 1) {
		words_length[i] = 0;
		i++;
	}
	i = 0;
	while (str[i]) {
		if (!my_isalphanumeric(str[i]))
			j++;
		else
			words_length[j] += 1;
		i++;
	}
}

void	full_arr(char **arr, char const *str)
{
	unsigned int	i = 0;
	unsigned int	j = 0;
	unsigned int	k = 0;

	while (str[k]) {
		if (!my_isalphanumeric(str[k])) {
			i++;
			k++;
			j = 0;
		}
		arr[i][j] = str[k];
		j++;
		k++;
	}
}

char	**set_malloc(const char *str)
{
	char		**arr;
	unsigned int	nb_sep;
	unsigned int	i = 0;
	unsigned int	*words_length;

	nb_sep = get_nbr_sep(str);
	arr = malloc(sizeof(char *) * (nb_sep + 2));
	words_length = malloc(sizeof(int) * (nb_sep + 1));
	get_words_length(words_length, str, nb_sep);
	while (i < nb_sep + 1) {
		arr[i] = malloc(sizeof(char) * (words_length[i] + 1));
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

char	**my_str_to_word_array(char const *str)
{
	char	**arr;

	arr = set_malloc(str);
	full_arr(arr, str);
	return (arr);
}
