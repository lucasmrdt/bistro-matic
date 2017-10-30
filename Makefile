##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## 
##

## SOURCES
SRC_PRG		=	main.c

OBJ_PRG		=	$(SRC_PRG:.c=.o)

CC		=	gcc

CFLAGS		=	-Iinclude -Wall -Wextra

LDFLAGS		=	-Llib/my -lmy

NAME_PRG	=	infinadd



$(NAME_PRG)	:	$(OBJ_PRG)
		$(MAKE) -C lib/my
		gcc -o $(NAME_PRG) $(OBJ_PRG) $(LDFLAGS)
		$(MAKE) clean


all:			$(NAME_PRG)

clean:
		rm -f $(OBJ_PRG) $(OBJ_TEST)

fclean:			clean
		rm -f $(NAME_PRG) $(NAME_TEST)

re:			fclean all
