# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 12:46:39 by thabeck-          #+#    #+#              #
#    Updated: 2023/11/20 13:53:36 by thabeck-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= zombieHorde

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

SRC 	= main.cpp		\
		Zombie.cpp		\
		zombieHorde.cpp

OBJ_PATH	= obj/
OBJ 		= $(addprefix $(OBJ_PATH), $(SRC:.cpp=.o))

CY		= \033[36;1m
GR		= \033[32;1m
RE		= \033[31;1m
RC		= \033[0m

$(OBJ_PATH)%.o:	%.cpp
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): 	$(OBJ)
	@printf "$(CY)Generating zombieHorde...$(RC)\n"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@printf "$(GR)Done!$(RC)\n"

all:	$(NAME)

re:		fclean all

clean:
	@$(RM) $(OBJ) $(OBJ_PATH)
	@printf "$(RE)zombieHorde objects removed!$(RC)\n"

fclean:		clean
	@$(RM) $(NAME)
	@printf "$(RE)zombieHorde removed!$(RC)\n"

.PHONY:		all clean fclean re
