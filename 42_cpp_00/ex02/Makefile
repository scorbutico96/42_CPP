CC = g++
STD = -std=c++98 -pedantic
ERR = -Wall -Wextra -Werror #-Wno-unused

NAME = account
SRC = tests.cpp Account.cpp

$(NAME) :
	$(CC) $(STD) $(ERR) $(SRC) -o $@

all : $(NAME)

clean :
	rm -f $(NAME)

re : clean all