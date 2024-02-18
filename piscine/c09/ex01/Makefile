
CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes

SRC = $(shell find srcs -type f -name "*.c") 

OBJ = $(SRC:srcs/%.c=srcs/%.o)

LIB = libft.a
LIBDIR = lib

all: $(LIB)

$(LIB): $(OBJ)
	ar rcs $@ $(OBJ)

srcs/%.o: srcs/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: 
	rm -f $(OBJ) $(LIB)

re: fclean all

.PHONY: all clean fclean re
