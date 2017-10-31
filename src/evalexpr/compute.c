/*
** EPITECH PROJECT, 2017
** function_pointer
** File description:
** file
*/

#include "evalexpr.h"

char	*c_add(char *s1, char *s2, char *sign)
{
	char	*result;

	if (s1->sign == s2->sign) {
		if (s1->sign == '-')
			*sign = '-';
		else
			*sign = '+';
		result = addinf(s1->nb, s2->nb);
	}
	else {
		if (s1->sign == '-')
			*sign = '-';
		else
			*sign = '+';
		result = subinf(s1->nb, s2->nb);
	}
	return (result);
}

char	*c_sub(char *s1, char *s2, char *sign)
{
	char	*result;

	if (s1->sign == s2->sign) {
		if (s1->sign == '-')
			*sign = '-';
		else
			*sign = '+';
		result = subinf(s1->nb, s2->nb);
	}
	else {
		if (s1->sign == '-')
			*sign = '-';
		else
			*sign = '+';
		result = addinf(s1->nb, s2->nb);
	}
	return (result);
}

char	*c_mul(char *s1, char *s2, char *sign)
{
	if (s1->sign == s2->sign)
		*sign = '+';
	else 
		*sign = '-';
	return (mulinf(s1->nb, s2->nb));
}

char	*c_div(char *s1, char *s2, char *sign)
{
	if (s1->sign == s2->sign)
		*sign = '+';
	else 
		*sign = '-';
	return (divinf(s1->nb, s2->nb));
}

char	*c_mod(char *s1, char *s2, char *sign)
{
	*sign = s1->sign;
	return (modinf(s1->nb, s2->nb));
}
