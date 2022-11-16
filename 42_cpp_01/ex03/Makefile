CC = clang++
STD = -std=c++98 -pedantic
ERR = -Wall -Wextra -Werror

NAME = violence
SRC = main.cpp Weapon.cpp HumanA.cpp HumanB.cpp

$(NAME) :
	$(CC) $(STD) $(ERR) $(SRC) -o $@

all : $(NAME)

clean :
	rm -f $(NAME)

re : clean all