CC = g++
STD = -std=c++98 -pedantic
ERR = -Wall -Wextra -Werror #-Wno-unused

NAME = casio
SRC = Casio.cpp PhoneBook.Class.cpp Contact.Class.cpp

$(NAME) :
	$(CC) $(STD) $(ERR) $(SRC) -o $@

all : $(NAME)

clean :
	rm -f $(NAME)

re : clean all