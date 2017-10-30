##
## EPITECH PROJECT, 2017
## MAKEFILE
## File description:
## file
##

DIR_SRC	=	../src

SRC	=	main.c	\
		$(DIR_SRC)/compute/addinf.c	\
		$(DIR_SRC)/compute/subinf.c	\
		$(DIR_SRC)/initialize.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I../include -Wall -Wextra

LDFLAGS	=	-L../lib/my -lmy

CC	=	gcc

NAME	=	test


$(NAME):	$(OBJ)
	$(MAKE) -C ../lib/my
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)
	$(MAKE) clean

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
