##
## EPITECH PROJECT, 2017
## MAKEFILE
## File description:
## file
##

ORIGIN	=	../..

SRC	=	$(ORIGIN)/tests/c_tests/compare_str.c	\
		$(ORIGIN)/tests/c_tests/add_next_nb_and_op.c	\
		$(ORIGIN)/src/compute/addinf.c		\
		$(ORIGIN)/src/compute/subinf.c		\
		$(ORIGIN)/src/compute/divinf.c		\
		$(ORIGIN)/src/compute/mulinf.c		\
		$(ORIGIN)/src/compute/modinf.c		\
		$(ORIGIN)/src/evalexpr/compute.c	\
		$(ORIGIN)/src/tools/is_negative.c	\
		$(ORIGIN)/src/tools/is_operator.c	\
		$(ORIGIN)/src/tools/stack_tools.c	\
		$(ORIGIN)/src/tools/parse_tools.c	\
		$(ORIGIN)/src/tools/get_weight.c	\
		$(ORIGIN)/src/initialize.c

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
