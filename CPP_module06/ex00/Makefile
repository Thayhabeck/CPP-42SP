# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/29 13:51:09 by thabeck-          #+#    #+#              #
#    Updated: 2023/12/24 01:19:20 by thabeck-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= convert

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

SRC 	= main.cpp ScalarConverter.cpp

INC		= ScalarConverter.hpp

OBJ_PATH	= obj/
OBJ 		= $(addprefix $(OBJ_PATH), $(SRC:.cpp=.o))

CY		= \033[36;1m
GR		= \033[32;1m
RE		= \033[31;1m
RC		= \033[0m

$(OBJ_PATH)%.o:	%.cpp
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): 	$(OBJ) $(INC)
	@printf "$(CY)Generating $(NAME)...$(RC)\n"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@printf "$(GR)Done!$(RC)\n"

all:	$(NAME)

test: $(NAME)
	@./run_test.sh

re:		fclean all

clean:
	@$(RM) $(OBJ) $(OBJ_PATH)
	@printf "$(RE)$(NAME) objects removed!$(RC)\n"

fclean:		clean
	@$(RM) $(NAME)
	@printf "$(RE)$(NAME) removed!$(RC)\n"

.PHONY:		all clean fclean re
