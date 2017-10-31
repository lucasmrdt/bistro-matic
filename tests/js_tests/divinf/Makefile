##
## EPITECH PROJECT, 2017
## MAKEFILE
## File description:
## file
##

ORIGIN	=	../../..

SRC	=	$(ORIGIN)/tests/js_tests/divinf/main.c	\
		$(ORIGIN)/src/compute/addinf.c		\
		$(ORIGIN)/src/compute/subinf.c		\
		$(ORIGIN)/src/compute/divinf.c		\
		$(ORIGIN)/src/compute/mulinf.c		\
		$(ORIGIN)/src/compute/modinf.c		\
		$(ORIGIN)/src/evalexpr/compute.c	\
		$(ORIGIN)/src/initialize.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I$(ORIGIN)/include -Wall -Wextra

LDFLAGS	=	-L$(ORIGIN)/lib/my -lmy

CC	=	gcc

NAME	=	test


$(NAME):	$(OBJ)
	$(MAKE) -C 	$(ORIGIN)/lib/my
	$(CC) -o 	$(NAME) $(OBJ) $(LDFLAGS)
	$(MAKE) 	clean

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
