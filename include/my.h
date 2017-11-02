/*
** EPITECH PROJECT, 2017
** library header
** File description:
** librairy header of libmy
*/

#ifndef MY_H
# define MY_H

# define EXIT_USAGE	84
# define EXIT_BASE	84
# define EXIT_SIZE_NEG	84
# define EXIT_MALLOC	84
# define EXIT_READ	84
# define EXIT_OPS	84
# define EXIT_SYNTAX	84

# define SYNTAX_ERROR_MSG	"syntax error"
# define ERROR_MSG		"error"

void	my_putchar(char c);
int	my_putstr(char const *str);
int	my_strlen(char const *str);
int	my_getnbr(char const *str);
char	*my_strdup(char const *src);
char	*my_revstr(char *str);
int	indexof(char *arr, char c);

#endif
