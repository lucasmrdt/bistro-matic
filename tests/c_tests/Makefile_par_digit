##
## EPITECH PROJECT, 2017
## MAKEFILE
## File description:
## file
##

ORIGIN	=	../..

TO_TEST_FOLDER	=	tests/c_tests

SRC	=	$(ORIGIN)/$(TO_TEST_FOLDER)/syntax_test.c \
		$(ORIGIN)/$(TO_TEST_FOLDER)/mult_par_test.c	\
		$(ORIGIN)/src/verif_folder/verif_parentheses_number.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I$(ORIGIN)/include -Wall -Wextra

LDFLAGS	=	-L$(ORIGIN)/lib/my -lmy -lcriterion

CC	=	gcc

NAME	=	test


$(NAME):	$(OBJ)
	$(MAKE) -C 	$(ORIGIN)/lib/my
	$(CC) -o 	$(NAME) -I../../include $(OBJ) $(LDFLAGS)
	$(MAKE) 	clean

all:		$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
