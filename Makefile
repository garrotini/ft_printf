
NAME = libftprintf.a

CC = cc
CFLAGS = -Wextra -Werror -Wall

SRC = ft_printf.c ft_numbers.c ft_words.c

SRC_OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_OBJ)
	ar rcs $(NAME) $(SRC_OBJ)

clean:
	rm -f $(SRC_OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
