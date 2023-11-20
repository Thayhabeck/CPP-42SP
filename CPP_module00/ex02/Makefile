# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 19:30:56 by thabeck-          #+#    #+#              #
#    Updated: 2023/11/19 19:36:27 by thabeck-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= GlobalBanksters

CC		= c++
CFLAGS	= -Wall -Wextra -Werror -std=c++98

RM		= rm -rf

SRC 	= tests.cpp		\
		Account.cpp

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
	@printf "$(CY)Generating GlobalBanksters...$(RC)\n"
	@$(CC) $(CFLAGS) -o $(NAME) $(OBJ)
	@printf "$(GR)Done!$(RC)\n"

all:	$(NAME)	

clean:
	@$(RM) $(OBJ) $(OBJ_PATH)
	@printf "$(RE)GlobalBanksters objects removed!$(RC)\n"

fclean:		clean
	@$(RM) $(NAME)
	@printf "$(RE)GlobalBanksters removed!$(RC)\n"

re:		fclean all

.PHONY:		all clean fclean re
