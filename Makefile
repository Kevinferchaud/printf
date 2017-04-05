##
## Makefile for emacs in /home/kevin.ferchaud/CPool_Day10
## 
## Made by ferchaud kevin
## Login   <kevin.ferchaud@epitech.net>
## 
## Started on  Sun Oct 16 11:00:15 2016 ferchaud kevin
## Last update Fri Mar 10 14:02:27 2017 ferchaud kevin
##

NAME	=	libmy.a

SRC	=	lib/my/my_putchar.c		\
		lib/my/my_put_nbr.c		\
		lib/my/my_putkey.c		\
		lib/my/my_put_nbruns.c		\
		lib/my/my_putstr.c		\
		lib/my/my_revstr.c		\
		lib/my/my_strcapitalize.c	\
		lib/my/my_strcat.c		\
		lib/my/my_strcmp.c		\
		lib/my/my_strcpy.c		\
		lib/my/my_strdup.c		\
		lib/my/my_strlen.c		\
		lib/my/my_strncat.c		\
		lib/my/my_strncmp.c		\
		lib/my/my_strncpy.c		\
		lib/my/my_strstr.c		\
		lib/my/my_swap.c		\
		lib/my/do_myop.c		\
		lib/my/do_myop2.c		\
		lib/my/do_myop3.c		\
		lib/my/do_myop4.c		\
		lib/my/printf.c

OBJ	=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ./lib/my

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../lib/my$(NAME)

re:	fclean all
