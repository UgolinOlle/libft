# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ugolin-olle <ugolin-olle@student.42.fr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/28 11:49:44 by ugolin-olle       #+#    #+#              #
#    Updated: 2023/11/12 00:13:21 by ugolin-olle      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# @$(CC) $(CFLAGS) $(INC_FLAGS) -c $< -o $@

SRCS := $(wildcard *.c)
OBJS = ${SRCS:.c=.o}

NAME = libft.a

LIBC = ar rcs
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

COLOR_RESET = \033[0m
COLOR_INFO = \033[0;94m
COLOR_SUCCESS = \033[0;92m

all: $(NAME)

.c.o:
	@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)
	@echo "$(COLOR_INFO)Compiling: $<$(COLOR_RESET)"

$(NAME): $(OBJS)
	@$(LIBC) $(NAME) $(OBJS)
	@echo "$(COLOR_SUCCESS)$(NAME) has been created successfully.$(COLOR_RESET)"

clean:
	@$(RM) $(OBJS)
	@echo "$(COLOR_INFO)Object files have been removed.$(COLOR_RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(COLOR_INFO)$(NAME) has been removed.$(COLOR_RESET)"

re: fclean all

.PHONY : all bonus clean fclean re
