##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## file
##

SRC_PRG		=	main.c	\
			src/initialize.c	\
			src/display_error.c	\
			src/compute/divinf.c	\
			src/compute/modinf.c	\
			src/compute/subinf.c	\
			src/compute/mulinf.c	\
			src/compute/addinf.c	\
			src/evalexpr/evalexpr_compute.c	\
			src/evalexpr/sign_handling.c	\
			src/evalexpr/evalexpr_tools.c	\
			src/evalexpr/eval_expr.c	\
			src/evalexpr/tools/is_nbr.c	\
			src/evalexpr/tools/is_bracket.c	\
			src/evalexpr/tools/get_nbr.c	\
			src/evalexpr/tools/get_weight.c	\
			src/evalexpr/tools/char_to_str.c	\
			src/evalexpr/tools/is_low_op.c	\
			src/evalexpr/tools/is_high_op.c	\
			src/evalexpr/tools/reverse_sign.c	\
			src/evalexpr/tools/set_bigger_first.c	\
			src/evalexpr/tools/get_elem_nbr.c	\
			src/evalexpr/tools/get_elem_op.c	\
			src/evalexpr/tools/is_op.c	\
			src/verification/check_char_in_base_or_op.c	\
			src/verification/check_error.c	\
			src/verification/check_last_char.c	\
			src/verification/check_digit_after_bracket.c	\
			src/verification/check_first_char.c	\
			src/verification/check_syntax.c	\
			src/verification/check_op_after_bracket.c	\
			src/verification/check_double_op.c	\
			src/verification/check_double_bracket.c	\
			src/verification/check_digit_before_bracket.c	\
			src/verification/check_validity_base_or_op.c	\
			src/verification/check_validity_base_and_op.c

OBJ_PRG		=	$(SRC_PRG:.c=.o)

CC		=	gcc

CFLAGS		=	-Iinclude -Wall -Wextra -g

LDFLAGS		=	-Llib/my -lmy

NAME_PRG	=	calc



$(NAME_PRG)	:	$(OBJ_PRG)
		$(MAKE) -C lib/my
		$(CC) -o $(NAME_PRG) $(OBJ_PRG) $(LDFLAGS)
		$(MAKE) clean

all:			$(NAME_PRG)

clean:
		rm -f $(OBJ_PRG) $(OBJ_TEST)

fclean:			clean
		rm -f $(NAME_PRG) $(NAME_TEST)
		$(MAKE) clean

re:			fclean all
