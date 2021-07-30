PREFIX = ft
NAME = lib$(PREFIX).a
SRC_DIR = srcs
INC_DIR = includes

$(NAME): all

all:
	gcc -Werror -Wall -Wextra -c $(SRC_DIR)/$(PREFIX)_*.c -I$(INC_DIR)
	ar rcs $(NAME) *.o

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
