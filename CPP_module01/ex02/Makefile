# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thabeck- <thabeck-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/20 14:13:07 by thabeck-          #+#    #+#              #
#    Updated: 2023/11/20 14:21:58 by thabeck-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = thisIsBrain

CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp

CY		= \033[36;1m
GR		= \033[32;1m
RE		= \033[31;1m
RC		= \033[0m

all: $(NAME)

$(NAME): $(SRC)
	@printf "$(CY)Generating thisIsBrain...$(RC)\n"
	@$(CC) $(CFLAGS) -o $(NAME) $(SRC)
	@printf "$(GR)Done!$(RC)\n"

clean:
	@rm -f $(NAME)
	@printf "$(RE)thisIsBrain removed!$(RC)\n"

fclean: clean

re: fclean all

.PHONY: all clean fclean re
