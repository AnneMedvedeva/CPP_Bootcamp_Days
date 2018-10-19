NAME	= identify

SRC		= main.cpp Base.cpp A.cpp B.cpp C.cpp

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
