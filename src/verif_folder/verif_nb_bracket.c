/*
** EPITECH PROJECT, 2017
** verif nb bracket
** File description:
** verif nb bracket
*/

int     verif_nb_bracket(char *str)
{
	int	i = 0;
	int	j = 0;
	int	k = 0;

	while (str[i] != '\0') {
		if (str[i] == OPS[OP_OPEN_PARENT_IDX])
			j++;
		if (str[i] == OPS[OP_CLOSE_PARENT_IDX])
			k++;
		i++;
	}
	if (j != k) {
		my_putstr(SYNTAX_ERROR_MSG);
		exit(EXIT_SYNTAX);
	}
	return (0);
}
