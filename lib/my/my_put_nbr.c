/*
** EPITECH PROJECT, 2017
** my_put_nbr.c
** File description:
** Function which could displays all numbers than an it could store.
*/

void	my_putchar(char);

int	my_put_nbr(long nbr)
{
	long	quotient = 1;
	int	digit;

	if (nbr < 0) {
		my_putchar('-');
		quotient *= -1;
	}
	while (nbr / quotient > 10) {
		quotient *= 10;
	}
	while (quotient != 0) {
		digit = 48 + nbr / quotient % 10;
		my_putchar(digit);
		quotient /= 10;
	}
	return (0);
}
