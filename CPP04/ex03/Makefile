CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp AMateria.cpp Character.cpp Cure.cpp ICharacter.cpp IMateriaSource.cpp\
		Ice.cpp MateriaSource.cpp

OBJS =$(SRCS:.cpp=.o)

NAME = AMateria

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean:clean	
	rm -f $(NAME)

re: fclean all

.Phony: clean