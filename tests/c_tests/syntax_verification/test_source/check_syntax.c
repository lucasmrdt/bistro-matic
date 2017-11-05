/*
** EPITECH PROJECT, 2017
** verif
** File description:
** file
*/

#include "bistromatic.h"

void	check_syntax(char *str)
{
	int	i;
	int	nb_brackets = 0;

	if (check_first_char(*str))
		printf("ERR with check_first_char(%s)\n", str);
	while (*str) {
		i = -1;
		while (VERIF_ARR[++i])
			if (VERIF_ARR[i](str) == 84)
				printf("ERR with VERIF_ARR[%d](%s)\n", i, str);
		if (*str == OPS[OP_OPEN_PARENT_IDX])
			nb_brackets++;
		else if (*str == OPS[OP_CLOSE_PARENT_IDX])
			nb_brackets--;
		str++;
	}
	if (check_last_char(*str - 1) == 84)
		printf("ERR with check_last_char(%s)\n", str);
	if (nb_brackets)
		printf("ERR with nb brackets : %d\n", nb_brackets);
}