/*
** EPITECH PROJECT, 2017
** my_charupcase
** File description:
** 
*/

void	my_charupcase(char *c)
{
	if (*c >= 97 && *c <= 122)
		*c = *c - 32;
}
