NAME = claptrap

CC = clang++
CFLAGS = $(CSTD) $(CWARN)
CSTD = -std=c++98 -pedantic
CWARN = -Wall -Wextra -Werror
RM = rm -f

SRCDIR = ./
OBJDIR = obj
BINDIR = bin
LIBDIR = lib

SOURCES = main.cpp ClapTrap.cpp
OBJECTS = $(addprefix $(OBJDIR)/, $(SOURCES:.cpp=.o))
TARGET = $(BINDIR)/$(NAME)

all : $(TARGET)

$(NAME) : all

clean :
	@$(RM) $(TARGET) $(OBJECTS)
	@echo "\033[33mclean completed\033[0m"

fclean : clean
	@$(RM) -r $(OBJDIR) $(BINDIR)
	@echo "\033[33mfull clean completed\033[0m"

re : clean all

#Link
$(TARGET) : $(OBJECTS)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -o $@ $^ $(INCLUDE)
	@echo "\033[32m"$@" compiled successfully\033[0m"

#Compile
$(OBJECTS) : $(OBJDIR)/%.o : $(SRCDIR)/%.cpp
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "\033[34m"$<" compiled successfully\033[0m"