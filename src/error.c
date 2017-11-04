/*
** EPITECH PROJECT, 2017
** error
** File description:
** file
*/

#include "my.h"

void	display_error(char *msg, int exit_value)
{
	my_putstr(msg);
	exit(exit_value);
}