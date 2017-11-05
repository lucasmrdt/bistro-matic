/*
** EPITECH PROJECT, 2017
** error
** File description:
** file
*/

#include <stdlib.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"

void	display_error(char *msg)
{
	write(2, msg, my_strlen(msg));
	exit(84);
}
