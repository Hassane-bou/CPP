CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Serializer.cpp main.cpp

OBJS = $(SRCS:.cpp=.o)

NAME = Serializer

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp Serializer.hpp
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
	rm -f $(OBJS)

fclean:clean
	rm -f $(NAME)

re: fclean all

.Phony: clean