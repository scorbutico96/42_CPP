CC = clang++
STD = -std=c++98 -pedantic
ERR = -Wall -Wextra -Werror

NAME = zombie
SRC = main.cpp Zombie.cpp newZombie.cpp randomChump.cpp

$(NAME) :
	$(CC) $(STD) $(ERR) $(SRC) -o $@

all : $(NAME)

clean :
	rm -f $(NAME)

re : clean all