CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = newZombie.cpp randomChump.cpp Zombie.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = Zombie

all: $(NAME)

$(NAME): $(OBJS) 
	$(CC) $(CFLAGS) $(OBJS)  -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.Phony: clean
	