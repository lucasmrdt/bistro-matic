##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## file
##

## SOURCES
SRC_PRG		=	main.c

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
