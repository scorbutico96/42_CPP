CC = clang++
STD = -std=c++98 -pedantic
ERR = -Wall -Wextra -Werror

NAME = karen
SRC = main.cpp Karen.cpp

$(NAME) :
	$(CC) $(STD) $(ERR) $(SRC) -o $@

all : $(NAME)

clean :
	rm -f $(NAME)

re : clean all