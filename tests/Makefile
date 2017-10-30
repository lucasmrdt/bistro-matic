##
## EPITECH PROJECT, 2017
## MAKEFILE
## File description:
## file
##

DIR_COMPUTE_FCT	=	../src/operation

SRC	=	main.c	\
		$(DIR_COMPUTE_FCT)/addinf.c	\
		$(DIR_COMPUTE_FCT)/subinf.c

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
