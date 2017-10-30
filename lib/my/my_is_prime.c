/*
** EPITECH PROJECT, 2017
** my_is_prime.c
** File description:
** TASK06
*/

int	is_divisible(int nb, int q1)
{
	int	q2;
	int	rest;

	q2 = nb / q1;
	rest = nb - q1 * q2;
	if (rest == 0)
		return (1);
	return (0);
}

int	my_is_prime(int nb)
{
	int	i = 2;

	while (i < nb) {
		if (is_divisible(nb, i))
			return (0);
		i++;
	}
	return (1);
}
