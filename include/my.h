/*
** EPITECH PROJECT, 2017
** libmy.h
** File description:
** header of libmy
*/

#ifndef MY_H
# define MY_H

int	my_compute_power_rec(int nb, int power);
int	my_compute_square_root(int nb);
int	my_findprime_sup(int nb);
int	my_getnbr(char const *str);
int	my_isneg(int nb);
int	my_is_prime(int nb);
int	my_is_divisible(int nb);
int	my_put_nbr(long nb);
int	my_strcmp(char const *s1, char const *s2);
int	my_str_isalpha(char const *str);
int	my_str_isnum(char const *str);
int	my_str_isprintable(char const *str);
int	my_str_isupper(char const *str);
int	my_strlen(char const *str);
int	my_strncmp(char const *s1, char const *s2, int n);
int	my_showmem(char const *str);
int	my_showstr(char const *str);
int	my_str_isprintable(char const *str);
int	my_char_isalpha(char c);
char	*my_strdup(char const *str);
char	*my_revstr(char *str);
char	*my_strcpy(char *dest, const char *src);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
char	*my_strncat(char *dest, char const *src, int nb);
char	*my_strcat(char *dest, char *src);
char	*my_strncpy(char *dest, char const *src, int n);
char	*my_strstr(char const *str, char const *to_find);
char	*my_strupcase(char *str);
void	my_swap(int *a, int *b);
void	my_putstr(char *str);
void	my_putchar(char c);
void	my_put_float(float nbr_float);
void	my_charupcase(char *c);

#endif
