##
## EPITECH PROJECT, 2017
## MAKEFILE
## File description:
## file
##

ORIGIN	=	../..

SRC	=	$(ORIGIN)/tests/c_tests/compare_str.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I$(ORIGIN)/include -Wall -Wextra

LDFLAGS	=	-L$(ORIGIN)/lib/my -lmy -lcriterion

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
