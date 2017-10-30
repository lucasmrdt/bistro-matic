/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** Function which could displays all numbers than an it could store.
*/

void	my_putchar(char);

void	my_put_float(float nbr_float)
{
	int	nb_digits = 1;
	int	digit;
	int	nbr;

	nbr_float *= 100;
	nbr = (int)nbr_float;
	while (nbr / (nb_digits * 10)) {
		nb_digits *= 10;
	}
	while (nb_digits != 0) {
		if (nb_digits == 10)
			my_putchar('.');
		digit = 48 + nbr / nb_digits % 10;
		my_putchar(digit);
		nb_digits /= 10;
	}
}
