/*
** EPITECH PROJECT, 2017
** function_pointer
** File description:
** file
*/

#include "bistromatic.h"

char	*c_add(stack_elem_t *elem1, stack_elem_t *elem2, char *sign)
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

char	*c_sub(stack_elem_t *elem1, stack_elem_t *elem2, char *sign)
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

char	*c_mul(stack_elem_t *elem1, stack_elem_t *elem2, char *sign)
{
	if (elem1->sign == elem2->sign)
		*sign = '+';
	else 
		*sign = '-';
	return (mulinf(elem1->value, elem2->value));
}

char	*c_div(stack_elem_t *elem1, stack_elem_t *elem2, char *sign)
{
	if (elem1->sign == elem2->sign)
		*sign = '+';
	else 
		*sign = '-';
	return (divinf(elem1->value, elem2->value));
}

char	*c_mod(stack_elem_t *elem1, stack_elem_t *elem2, char *sign)
{
	*sign = elem1->sign;
	return (modinf(elem1->value, elem2->value));
}
