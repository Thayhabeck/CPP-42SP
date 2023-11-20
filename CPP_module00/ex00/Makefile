# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/19 02:34:26 by thabeck-          #+#    #+#              #
#    Updated: 2023/11/19 19:18:07 by thabeck-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

CY		= \033[36;1m
GR		= \033[32;1m
RE		= \033[31;1m
RC		= \033[0m

all: $(NAME)

$(NAME): $(SRC)
	@printf "$(CY)Generating megaphone...$(RC)\n"
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC)
	@printf "$(GR)Done!$(RC)\n"

clean:
	@rm -f $(NAME)
	@printf "$(RE)megaphone removed!$(RC)\n"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
