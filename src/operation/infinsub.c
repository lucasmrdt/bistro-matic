/*
** EPITECH PROJECT, 2017
** infinadd
** File description:
** sub with infinite numbers
*/

int	infinsub(char *s1, char *s2, char *res_computed, int rest)
{
	unsigned int	n1 = (*s1 ? *s1 - 48 : 0);
	unsigned int	n2 = (*s2 ? *s2 - 48 : 0);
	unsigned int	res_sum = n1 - n2 + rest;
	unsigned int	unit = res_sum % 10;

	if (!*s1 && !*s2 && !rest)
		return (0);
	if (*s1)
		s1++;
	if (*s2)
		s2++;
	rest = res_sum / 10 % 10;
	*res_computed = unit + 48;
	return(infinsub(s1, s2, ++res_computed, rest));
}