/*
** EPITECH PROJECT, 2017
** error
** File description:
** file
*/

#include <stdlib.h>
#include "my.h"
#include <stdlib.h>

void	display_error(char *msg)
{
	write(2, msg, my_strlen(msg));
	exit(84);
}
