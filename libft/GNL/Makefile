# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cleriche <cleriche@student.42nice.fr>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/02 09:56:38 by cleriche          #+#    #+#              #
#    Updated: 2024/12/02 10:09:25 by cleriche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#name of the library to create
NAME = get_next_line.a

#compiler and options
CC = cc
CFLAGS = -Wall -Wextra -Werror

#source files
SRC = get_next_line_bonus.c \
	get_next_line_utils_bonus.c

OBJ = $(SRC:.c=.o)

#default rule
all: $(NAME)

#library creation
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

#cleaning object files
clean:
	rm -f $(OBJ)

#full cleanup (objects and library)
fclean: clean
	rm -f $(NAME)

#full recompilation
re: fclean all

#declaration of phony targets
.PHONY: all clean fclean re
