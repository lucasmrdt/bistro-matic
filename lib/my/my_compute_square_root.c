/*
** EPITECH PROJECT, 2017
** my_compute_square_root.c
** File description:
** TASK05
*/

int	my_compute_square_root(int nb)
{
	int	square_root = 0;
	int	square = 0;

	while (square <= nb) {
		if (square == nb) {
			return (square_root);
		}
		square_root++;
		square = square_root * square_root;
	}
	return (0);
}
