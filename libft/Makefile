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

#MAKEFLAGS += -s

#name of the library to create
NAME = libft.a

#compiler and options
CC = cc
CFLAGS = -Wall -Wextra -Werror

AR=ar
ARFLAGS=-rcs

#dependencies
DEPS = libft.h

#source files
LIBRARY_DIRS =	my_libft \
				printf \
				GNL \

LIBFT = ./my_libft/my.libft.a \
		./printf/libftprintf.a \
		./GNL/get_next_line.a \

#default rule
all: $(NAME)

# static library creation
$(NAME):
	cd my_libft && make
	ar x my_libft/my_libft.a
	cd printf && make
	ar x printf/libftprintf.a
	cd GNL && make
	ar x GNL/get_next_line.a
	$(AR) $(ARFLAGS) $(NAME) *.o
	rm *.o
	ranlib $(NAME)

#cleaning object files
clean:
	$(foreach dir, $(LIBRARY_DIRS), $(MAKE) -C $(dir) clean;)

#full cleanup (objects and library)
fclean: clean
	$(foreach dir, $(LIBRARY_DIRS), $(MAKE) -C $(dir) fclean;)
		rm -f $(NAME) $(LIBFT)

#full recompilation
re: fclean all

#declaration of phony targets
.PHONY: all clean fclean re
