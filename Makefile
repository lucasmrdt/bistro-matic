##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## file
##

## SOURCES
SRC_PRG		=	main.c	\
			src/compute/divinf.c	\
			src/compute/modinf.c	\
			src/compute/subinf.c	\
			src/compute/mulinf.c	\
			src/compute/addinf.c	\
			src/initialize.c	\
			src/evalexpr/evalexpr_compute.c	\
			src/evalexpr/tools/is_nbr.c	\
			src/evalexpr/tools/is_bracket.c	\
			src/evalexpr/tools/get_nbr.c	\
			src/evalexpr/tools/is_low_op.c	\
			src/evalexpr/tools/get_elem_nbr.c	\
			src/evalexpr/tools/get_elem_op.c	\
			src/evalexpr/tools/is_hight_op.c	\
			src/evalexpr/tools/is_op.c	\
			src/evalexpr/evalexpr_tools.c	\
			src/evalexpr/compute.c	\
			src/evalexpr/evalexpr.c

OBJ_PRG		=	$(SRC_PRG:.c=.o)

CC		=	gcc

CFLAGS		=	-Iinclude -Wall -Wextra

LDFLAGS		=	-Llib/my -lmy

NAME_PRG	=	calc



$(NAME_PRG)	:	$(OBJ_PRG)
		$(MAKE) -C lib/my
		$(CC) -o $(NAME_PRG) $(OBJ_PRG) $(LDFLAGS)
		$(MAKE) clean


all:			$(NAME_PRG)

clean:
		rm -f $(OBJ_PRG) $(OBJ_TEST)
##		$(MAKE) fclean -C tests

fclean:			clean
		rm -f $(NAME_PRG) $(NAME_TEST)
		$(MAKE) clean

re:			fclean all
