/*
** EPITECH PROJECT, 2017
** function_pointer
** File description:
** file
*/

#include "bistromatic.h"

char	*c_add(linked_nb_t *elem1, linked_nb_t *elem2, char *sign)
{
	char	*result;

	if (elem1->sign == elem2->sign) {
		if (elem1->sign == '-')
			*sign = '-';
		else
			*sign = '+';
		result = addinf(elem1->value, elem2->value);
	}
	else {
		if (elem1->sign == '-')
			*sign = '-';
		else
			*sign = '+';
		result = subinf(elem1->value, elem2->value);
	}
	return (result);
}

char	*c_sub(linked_nb_t *elem1, linked_nb_t *elem2, char *sign)
{
	char	*result;

	if (elem1->sign == elem2->sign) {
		if (elem1->sign == '-')
			*sign = '-';
		else
			*sign = '+';
		result = subinf(elem1->value, elem2->value);
	}
	else {
		if (elem1->sign == '-')
			*sign = '-';
		else
			*sign = '+';
		result = addinf(elem1->value, elem2->value);
	}
	return (result);
}

char	*c_mul(linked_nb_t *elem1, linked_nb_t *elem2, char *sign)
{
	if (elem1->sign == elem2->sign)
		*sign = '+';
	else 
		*sign = '-';
	return (mulinf(elem1->value, elem2->value));
}

char	*c_div(linked_nb_t *elem1, linked_nb_t *elem2, char *sign)
{
	if (elem1->sign == elem2->sign)
		*sign = '+';
	else 
		*sign = '-';
	return (divinf(elem1->value, elem2->value));
}

char	*c_mod(linked_nb_t *elem1, linked_nb_t *elem2, char *sign)
{
	*sign = elem1->sign;
	return (modinf(elem1->value, elem2->value));
}
