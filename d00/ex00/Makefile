SRC = megaphone.cpp

NAME = megaphone

CC = clang++ -Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

%.o: %.c
	$(CC) -c -o $@ $<

clean:
	/bin/rm -rf *.o

fclean: clean
	/bin/rm -f $(NAME)

re : fclean all
