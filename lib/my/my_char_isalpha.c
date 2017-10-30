/*
** EPITECH PROJECT, 2017
** my_char_isalpha
** File description:
** 
*/

int	my_char_isalpha(char c)
{
	if ((c > 64 && c < 91) || (c > 96 && c < 123))
		return (1);
	return (0);
}
