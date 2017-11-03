/*
** EPITECH PROJECT, 2017
** check char base
** File description:
** check if the char is in the base or not
*/

int check_char_base(char *str)
{
	int i = 0; 

	while (str[i]) {
		if (str[i] != is_number && str[i] != is_operator) {
		        	my_putstr(SYNTAX_ERROR_MSG);
				exit(EXIT_BASE);
		}
		i += 1; 
	}
}
