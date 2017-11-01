/*
** EPITECH PROJECT, 2017
** function
** File description:
** file
*/

#include "my.h"
#include "evalexpr.h"

void	set_bigger_first(linked_nb_t **elem1, linked_nb_t **elem2)
{
	char	*s1 = (*elem1)->value;
	char	*s2 = (*elem2)->value;
	void	*tmp;

	if (str_cmp(s1, s2) < 0) {
		tmp = *elem1;
		*elem1 = *elem2;
		*elem2 = tmp;
	}
}