NAME	= phonebook

SRC		= main.cpp contact.cpp mng_contact.cpp

CFLAG	= -Wall -Wextra -Werror

all: $(NAME)
	clang++ $(CFLAG) $(SRC) -I . -o $(NAME)

$(NAME):
#	clang++ $(CFLAG) $(SRC) -I . -o $(NAME)

clean:
	/bin/rm -f *.o

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all

.PHONY: clean fclean re all test