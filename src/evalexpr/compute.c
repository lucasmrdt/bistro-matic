/*
** EPITECH PROJECT, 2017
** function_pointer
** File description:
** file
*/

#include <stdbool.h>
#include "bistromatic.h"

char	*c_add(stack_elem_t *elem1, stack_elem_t *elem2, char *sign)
{
	char	*result;

	set_bigger_first(&elem1, &elem2, false);
	*sign = elem1->sign;
	if (elem1->sign == elem2->sign)
		result = addinf(elem1->value, elem2->value);
	else
		result = subinf(elem1->value, elem2->value);
	return (result);
}

char	*c_sub(stack_elem_t *elem1, stack_elem_t *elem2, char *sign)
{
	char	*result;

	printf("init : %c%s - %c%s\n", elem1->sign, elem1->value, elem2->sign, elem2->value);
	if (elem1->sign == elem2->sign) {
		set_bigger_first(&elem1, &elem2, true);
		*sign = elem1->sign;
		result = subinf(elem1->value, elem2->value);
	}
	else {
		set_bigger_first(&elem1, &elem2, true);
		*sign = elem1->sign;
		result = addinf(elem1->value, elem2->value);
	}
	printf("after : %c%s - %c%s\n", elem1->sign, elem1->value, elem2->sign, elem2->value);
	return (result);
}

char	*c_mul(stack_elem_t *elem1, stack_elem_t *elem2, char *sign)
{
	if (elem1->sign == elem2->sign)
		*sign = OPS[OP_PLUS_IDX];
	else 
		*sign = OPS[OP_NEG_IDX];
	return (mulinf(elem1->value, elem2->value));
}

char	*c_div(stack_elem_t *elem1, stack_elem_t *elem2, char *sign)
{
	if (*(elem2->value) == BASE[0])
		exit(EXIT_USAGE);
	if (elem1->sign == elem2->sign)
		*sign = OPS[OP_PLUS_IDX];
	else 
		*sign = OPS[OP_NEG_IDX];
	return (divinf(elem1->value, elem2->value));
}

char	*c_mod(stack_elem_t *elem1, stack_elem_t *elem2, char *sign)
{
	if (*(elem2->value) == BASE[0])
		exit(EXIT_USAGE);
	*sign = elem1->sign;
	return (modinf(elem1->value, elem2->value));
}
