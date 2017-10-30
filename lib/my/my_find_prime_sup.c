/*
** EPITECH PROJECT, 2017
** my_find_prime_sup.c
** File description:
** TASK07
*/

int	my_is_prime(int);

int	my_find_prime_sup(int nb)
{
	while (!my_is_prime(nb)) {
		nb++;
	}
	return (nb);
}
