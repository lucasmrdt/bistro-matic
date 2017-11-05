/*
** EPITECH PROJECT, 2017
** set_bigger_first
** File description:
** file
*/

#include <stdbool.h>
#include "my.h"
#include "bistromatic.h"

void	set_bigger_first(stack_elem_t **elem1, stack_elem_t **elem2,
	bool rev_sign)
{
	stack_elem_t	*tmp;

	if (compare_str((*elem1)->value, (*elem2)->value, BASE) < 0) {
		tmp = *elem1;
		*elem1 = *elem2;
		*elem2 = tmp;
		if (rev_sign)
			reverse_sign(elem1);
	}
}
