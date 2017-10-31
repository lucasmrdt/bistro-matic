/*
** EPITECH PROJECT, 2017
** divinf
** File description:
** divinf.c
*/

char	*convert(int q);

char	*divinf(char *s1, char *s2)
{
	unsigned int	q = 0;

	while (compare_str(s1, s2) > 0) {
		q++;
		s1 = subinf(s1, s2);
	}
	return (convert(q));
}

char	*convert(int q)
{
	unsigned int	i = 0;
	char	*quotient;

	while (q) {
		quotient[i] = q % 10;
		q /= 10;
		i++;
	}
	my_revstr(quotient);
	return (quotient);
}

int	main(void)
{
	char	*s1 = "123";
	char	*s2 = "18";

	divinf(s1, s2);
	return (0);
}
