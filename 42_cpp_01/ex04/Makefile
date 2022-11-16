CC = clang++
STD = -std=c++98 -pedantic
ERR = -Wall -Wextra -Werror

NAME = replace
SRC = main.cpp

$(NAME) :
	$(CC) $(STD) $(ERR) $(SRC) -o $@

all : $(NAME)

clean :
	rm -f $(NAME)
	rm -f testfile.replace
	rm -f loremipsum.replace

re : clean all