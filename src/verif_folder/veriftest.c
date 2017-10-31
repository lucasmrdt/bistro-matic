/*
** EPITECH PROJECT, 2017
** verif_syntax.c
** File description:
** verif syntax
*/

int	verif_nb_bracket(char *str)
{
	int	i = 0;
	int	j = 0;
	int	k = 0;

	while (str[i] != '\0') {
		if (str[i] == '(')
			j++;
		if (str[i] == ')')
			k++;
		i++;
	}
	if (j != k)
		return (84);
	return (0);
}

int	verif_carac(char *str)
{
	int	i = 0;

	while (str[i] != '\0') {
		if (str[i] == '+' && str[i + 1] == ')')
			return (84);
		if (str[i] == '-' && str[i + 1] == ')')
			return (84);
		if (str[i] == '/' && str[i + 1] == ')')
			return (84);
		if (str[i] == '%' && str[i + 1] == ')')
			return (84);
		if (str[i] == '*' && str[i + 1] == ')')
			return (84);
		i++;
	}
	return (0);
}

int	verif_first_carac(char *str)
{
	if (str[0] == '/' || str[0] == '%' || str[0] == '*' || str[0] == '+')
		return (84);
	return (0);
}

int	verif_last_carac(char *str)
{
	int	i = 0;

	while (str[i] != '\0')
		i++;
	if (str[i - 1] == '+' || str[i - 1] == '-')
		return (84);
	if (str[i - 1] == '/' || str[i - 1] == '%' || str[i - 1] == '*')
		return (84);
	return (0);
}

int	verif_carac_bis(char *str)
{
	int	i = 0;
	int	error = 84;

	while (str[i] != '\0') {
		if (str[i] == '(' && str[i + 1] == '+')
			return (84);
		if (str[i] == '(' && str[i + 1] == '/')
                        return (84);
		if (str[i] == '(' && str[i + 1] == '%')
                        return (84);
		if (str[i] == '(' && str[i + 1] == '*')
                        return (error);
		i++;
	}
	return (0);
}

int	verif_double_carac(char *str)
{
	int	i = 0;
	int	j = 0;
	char	opboard[] = "+-/%*";
	
	while (str[i] != '\0') {
		printf("%s\n", "AAAAA");
		while (str[i] != opboard[j] && opboard[j] != '\0') {
			printf("%d\n", j);
			j++;
		}
		if (str[i] == opboard[j]) {
			j = 0;
			while (opboard[j] != '/0') {
				printf("Worked");
				if (str[i + 1] == opboard[j]);
				return (84);
			}
		}
	i++;
	
	}
}		

int	main(int ac, char **argv)
{
	char	*str = argv[1];
	
	if (verif_nb_bracket(str) == 84)
		return (84);
	if (verif_carac(str) == 84)
		return (84);
	if (verif_first_carac(str) == 84)
		return (84);
	if (verif_last_carac(str) == 84)
		return (84);
	if (verif_carac_bis(str) == 84)
		return (84);
//	verif_double_carac(str);
//	if (verif_double_carac(str) == 84)
		return (84);
	printf("%s\n", str);
}
