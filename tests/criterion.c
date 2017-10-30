/*
** EPITECH PROJECT, 2017
** TEST
** File description:
** 
*/

#include <string.h>
#include <stdio.h>
#include <criterion/criterion.h>
#include "my.h"

Test(day10, get_value)
{
	cr_assert(my_get_value("123ezd") == 123, "ERR : 1");
	cr_assert(my_get_value("a123ezd") == 0, "ERR : 2");
	cr_assert(my_get_value("123") == 123, "ERR : 3");
	cr_assert(my_get_value("ezd") == 0, "ERR : 4");
	cr_assert(my_get_value("") == 0, "ERR : 5");	
}
