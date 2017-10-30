/*
** EPITECH PROJECT, 2017
** my_show_word_array
** File description:
** TASK03
*/

void	my_putchar(char c);
int	my_putstr(char const *str);

int	my_show_word_array(char * const * tab)
{
	unsigned int	i = 0;

	while (tab[i]) {
		my_putstr(tab[i]);
		my_putchar('\n');
		i++;
	}
	return (0);
}
