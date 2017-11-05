##
## EPITECH PROJECT, 2017
## MAKEFILE
## File description:
## file
##

ORIGIN	=	../../..

SRC	=	main.c	\
		$(ORIGIN)/src/display_error.c	\
		$(ORIGIN)/src/initialize.c	\
		$(ORIGIN)/src/compute/addinf.c	\
		$(ORIGIN)/src/compute/subinf.c	\
		$(ORIGIN)/src/compute/divinf.c	\
		$(ORIGIN)/src/compute/mulinf.c	\
		$(ORIGIN)/src/compute/modinf.c	\
		$(ORIGIN)/src/evalexpr/tools/set_bigger_first.c	\
		$(ORIGIN)/src/evalexpr/tools/reverse_sign.c	\
		$(ORIGIN)/src/evalexpr/sign_handling.c	\
		$(ORIGIN)/src/evalexpr/tools/is_bracket.c	\
		$(ORIGIN)/src/evalexpr/tools/is_high_op.c	\
		$(ORIGIN)/src/evalexpr/tools/is_low_op.c	\
		$(ORIGIN)/src/evalexpr/tools/is_nbr.c	\
		$(ORIGIN)/src/evalexpr/tools/is_op.c	\
		test_source/check_syntax.c	\
		test_source/check_char_in_base_or_op.c	\
		test_source/check_last_char.c	\
		test_source/check_digit_after_bracket.c	\
		test_source/check_first_char.c	\
		test_source/check_op_after_bracket.c	\
		test_source/check_double_op.c	\
		test_source/check_digit_before_bracket.c

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
