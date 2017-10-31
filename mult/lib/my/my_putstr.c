/*
** EPITECH PROJECT, 2017
** my_putstr
** File description:
** display string
*/

void	my_putchar(char c);

int	my_putstr(char const *str)
{
	unsigned int	i = 0;

	while (str[i]) {
		my_putchar(str[i]);
		i++;
	}
	return (0);
}