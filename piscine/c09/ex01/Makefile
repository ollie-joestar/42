# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ollie <oohnivch@student.42.fr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/19 11:36:24 by ollie             #+#    #+#              #
#    Updated: 2024/02/20 21:34:09 by ollie            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes

SRC = $(shell find srcs -type f -name "*.c") 

OBJ = $(SRC:srcs/%.c=srcs/%.o)

LIB = libft.a

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
