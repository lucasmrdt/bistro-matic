##
## EPITECH PROJECT, 2017
## MAKEFILE
## File description:
## 
##

SRC	=	my_put_float.c			\
		my_putstr.c			\
		my_is_prime.c			\
		my_strupcase.c			\
		my_showstr.c			\
		my_compute_power_rec.c		\
		my_compute_square_root.c	\
		my_strstr.c			\
		my_str_to_word_array.c		\
		my_str_isupper.c		\
		my_str_islower.c		\
		my_str_isnum.c			\
		my_strcmp.c			\
		my_strncmp.c			\
		my_strcapitalize.c		\
		my_isneg.c			\
		my_strcat.c			\
		my_find_prime_sup.c		\
		my_str_isalpha.c		\
		my_strncpy.c			\
		my_strdup.c			\
		my_putchar.c			\
		my_strlen.c			\
		my_char_isalpha.c		\
		my_showmem.c			\
		my_charupcase.c			\
		my_put_nbr.c			\
		my_strncat.c			\
		my_str_isprintable.c		\
		my_getnbr.c			\
		my_swap.c			\
		my_sort_int_array.c		\
		my_strcpy.c			\
		my_show_word_array.c		\
		my_strlowcase.c			\
		my_revstr.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra -lgcov

CC	=	gcc

NAME	=	libmy.a


$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		$(MAKE) clean


all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
