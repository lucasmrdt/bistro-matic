##
## EPITECH PROJECT, 2017
## MAKEFILE
## File description:
## file
##

ORIGIN	=	../../..

SRC	=	$(ORIGIN)/tests/js_tests/divinf/main.c	\
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
		$(ORIGIN)/src/verification/check_syntax.c	\
		$(ORIGIN)/src/verification/check_char_in_base_or_op.c	\
		$(ORIGIN)/src/verification/check_last_char.c	\
		$(ORIGIN)/src/verification/check_digit_after_bracket.c	\
		$(ORIGIN)/src/verification/check_first_char.c	\
		$(ORIGIN)/src/verification/check_op_after_bracket.c	\
		$(ORIGIN)/src/verification/check_double_bracket.c	\
		$(ORIGIN)/src/verification/check_double_op.c	\
		$(ORIGIN)/src/verification/check_digit_before_bracket.c

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
