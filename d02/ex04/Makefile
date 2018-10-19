# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amedvedi <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/10/03 21:05:18 by amedvedi          #+#    #+#              #
#    Updated: 2018/10/03 21:05:19 by amedvedi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= eval_expr

SRC		= main.cpp Fixed.cpp

CFLAG	= -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	clang++ $(CFLAG) $(SRC) -I . -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all test
