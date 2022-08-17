#source files
SRC = 	ft_printf.c \
		libft_functions.c \
		auxiliar_functions.c \

#tranform into .o
OBJ = $(SRC:.c=.o)

#header source
HEADER = libftprintf.h

#static library's name
NAME = libftprintf.a

#for compliling
FLAGS = -Wall -Wextra -Werror

#remove files
RM = rm -f

##RULES
#compile 
.c.o:
		cc $(FLAGS) -c $< -o $(<:.c=.o)

#rule name - make library
$(NAME): $(OBJ) $(HEADER)
		ar -rcs $(NAME) $(OBJ) $(HEADER)

#make libft.a
all: $(NAME)

#remove objects
clean: 
		$(RM) $(OBJ)
#remove all
fclean: clean
		$(RM) $(NAME)
#clear all
re: fclean all

#avoids double inclusion
.PHONY: all clean fclean re


##REMOVER
cavalinho:
		gcc $(SRC) libftprintf.h && clear && ./a.out