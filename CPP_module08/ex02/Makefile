# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 13:51:09 by thabeck-          #+#    #+#              #
#    Updated: 2023/12/30 02:13:18 by thabeck-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= MutantStack

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

SRC 	= main.cpp

INC		= MutantStack.hpp

CY		= \033[36;1m
GR		= \033[32;1m
RE		= \033[31;1m
RC		= \033[0m

all: $(NAME)

$(NAME): $(SRC) $(INC)
	@printf "$(CY)Generating $(NAME)...$(RC)\n"
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC)
	@printf "$(GR)Done!$(RC)\n"

clean:
	@$(RM) -f $(NAME)
	@printf "$(RE)$(NAME) removed!$(RC)\n"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
