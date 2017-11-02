##
## EPITECH PROJECT, 2017
## MAKEFILE
## File description:
## file
##

SRC	=	my_putstr.c	\
		my_putchar.c	\
		my_strlen.c	\
		my_getnbr.c	\
		my_revstr.c	\
		my_strdup.c	\
		my_strcpy.c	\
		compare_str.c	\
		my_memset.c	\
		indexof.c

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
