##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## bsq
##

CC 	= 	gcc

SRC 	=		src/main.c\
				src/102_architect.c\
				lib/my_putstr.c\
				lib/my_getnbr.c

OBJ     = 		$(SRC:.c=.o)

NAME	=		102architect

CFLAGS 	=	-W -Wall -Wextra -pedantic


all:	$(NAME)

$(NAME): $(OBJ)
		gcc -o $(NAME) $(OBJ)
clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all