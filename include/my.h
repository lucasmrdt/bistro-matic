/*
** EPITECH PROJECT, 2017
** library header
** File description:
** librairy header of libmy
*/

#ifndef MY_H
# define MY_H

void	my_putchar(char c);
int	my_putstr(char const *str);
int	my_strlen(char const *str);
int	my_getnbr(char const *str);
char	*my_strdup(char const *src);
char	*my_revstr(char *str);
int	indexof(char *arr, char c);
void	my_memset(char *result, char c, int length);
int	compare_str(char *s1, char *s2);

#endif
