##
## EPITECH PROJECT, 2017
## MAKEFILE
## File description:
## file
##

ORIGIN	=	../..

SRC	=	$(ORIGIN)/src/display_error.c	\
		global/compare_str.c	\
		syntax_verification/par_digit_test.c	\
		syntax_verification/base_op_test.c	\
		syntax_verification/test_source/verif_digit_par.c	\
		syntax_verification/test_source/verif_first_carac.c	\
		syntax_verification/test_source/verif_last_carac.c	\
		syntax_verification/test_source/check_char_base.c	\
		syntax_verification/test_source/verif_carac_after_bracket.c	\
		syntax_verification/test_source/verif_nb_bracket.c	\
		syntax_verification/test_source/verif_bracket_after_ops.c	\
		syntax_verification/test_source/verif_parentheses_number.c	\
		syntax_verification/test_source/verif_doublecarac.c	\
		syntax_verification/mult_par_test.c	\
		syntax_verification/digit_par_test.c

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
