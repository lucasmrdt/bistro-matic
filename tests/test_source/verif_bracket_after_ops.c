/*
** EPITECH PROJECT, 2017
** verif_syntax.c
** File description:
** verif syntax
*/

int	verif_bracket_after_op(char *str)
{
	int	i = 0;
	int	j = 2;

	while (str[i]) {
		while (str[i] != ops[j] && ops[j]) {
				j++;
			}
		if (ops[j] && str[i + 1] == ops[OP_CLOSE_PARENT_IDX]) {
			my_putstr(SYNTAX_ERROR_MSG);
			return (EXIT_SYNTAX);
			}
		if (!ops[j])
			j = 2;
		i++;
	return (0);
}
