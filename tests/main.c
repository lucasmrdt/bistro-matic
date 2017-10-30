/*
** EPITECH PROJECT, 2017
** main
** File description:
** main of test
*/

#include <stdio.h>
#include "bistromatic.h"

int	test_str(char *s1, char *s2);
char	*BASE;
char	*OPS;

int	main(int ac, char **av)
{
	pfunc_t	COMPUTE_ARR[] = {&addinf, &subinf};
	char	*arr_name_func[] = {"addinf", "subinf", "mulinf", "divinf", "modinf"};
	int	i = -1;

	(void)(ac);
	initialize_global_var("()+-*/\%", "ZBC");
	while(!test_str(arr_name_func[++i], av[1]));
	printf("%s\n", (COMPUTE_ARR[i])(av[2], av[3]));
}

int	test_str(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2) {
		s1++;
		s2++;
	}
	return ((!*s1 && !*s2 ? 1 : 0));
}